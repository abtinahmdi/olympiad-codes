#include<bits/stdc++.h>
using namespace std;
const int N = 5e2 + 5e1;
int n, d[N], dp[N][N];
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> d[i];
	}
	for(int j = 0;j < n;j++){
		for(int i = j;i >= 0;i++){
			if (i > j){
				dp[i][j] = 0;
				break;
			}
			if (i == j) {
				dp[i][j] = 1;
				break;
			}  
			dp[i][j] = 1 + dp[i + 1][j];
			if (d[i] == d[i + 1]) 
				dp[i][j] = min(1 + dp[i + 2][j], dp[i][j]);
			for (int k = i + 2; k <= j; k++)
				if (d[i] == d[k]) 
					dp[i][j] = min(dp[i + 1][k - 1] + dp[k + 1][j], dp[i][j]);
		}
	}
	cout << dp[n - 1][n - 1];
}