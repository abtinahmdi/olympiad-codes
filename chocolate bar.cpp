#include<bits/stdc++.h>
using namespace std;
int n, m, k;
int dp[37][37][57];
int fdp(int i,int j,int p)
{
	if(dp[i][j][p] || i * j == p || !p) 
		return dp[i][j][p];
	int INF = 1e9;
	for(int k = 1;k <= i - k;++k)
		for(int o = 0;o <= k;++o)
			INF = min(INF, j * j + fdp(k, j, p - o) + fdp(i - k, j, o));
	for(int k = 1;k <= j - k;++k)
		for(int o = 0;o <= k;++o)
			INF = min(INF, i * i + fdp(i, j - k, p - o) + fdp(i, k, o));
	return dp[i][j][p] = INF;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> n >> m >> k;
		cout << fdp(n, m, k) << endl;
	}
}