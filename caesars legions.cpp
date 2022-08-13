#include<bits/stdc++.h>
using namespace std;
int dp[110][110][2];
int mod = 1e8;
int n1, n2, a, b;
int main()
{
	cin >> n1 >> n2 >> a >> b;
	dp[0][0][0] = 1;
	dp[0][0][1] = 1;  
	for(int i = 0;i <= n1;i++) 
		for(int j = 0;j <= n2;j++){
			for(int k = 1;k <= a;k++) 
				if (i >= k) 
					dp[i][j][0] += dp[i - k][j][1] % mod;
			for(int k = 1;k <= b;k++) 
				if(j >= k) 
					dp[i][j][1] += dp[i][j - k][0] % mod;
	}
	cout << (dp[n1][n2][0] + dp[n1][n2][1]) % mod;
	return 0;
}
