#include<bits/stdc++.h>
using namespace std;
const int N = 1e1 + 5;
const int M = 1e4 + 5;
const long long INF = 1e17;
long long n, m, a[M], dp[N][M];
int main()\
{
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		a[i];
	}
	dp[0][0] = 0;
	for(int j = 0;j <= m;j++){
		dp[0][j] = INF;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 0;j <= m;j++){
			dp[i][j] = INF;
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			for(int k = 0;k <= 100;k++){
				if(k * k > j || dp[i - 1][j - k * k] == INF)
					continue;
				dp[i][j] = min(dp[i - 1][j - k * k] + (a[i] * k) * (a[i] * k), dp[i][j]);
			}
		}
	}
	if(dp[n][m] != INF)
		cout << dp[n][m] << '\n';
	else
		cout << "-1" << '\n';
	return 0;
}