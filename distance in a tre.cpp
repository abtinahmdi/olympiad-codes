#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, ans, dp[N][500];
bool mark[N];
vector<int> gr[N];
void dfs(int v)
{
	mark[v] = true;
	dp[v][0] = 1;
	for(auto u :gr[v]){
		if(!mark[u])
			dfs(u);
			for(int i = 0;i < k;i++){
				ans = ans + dp[u][i] + dp[v][k - i - 1];
			}
			for(int i = 0;i < k;i++){
				dp[v][i + 1] = dp[v][i + 1] + dp[u][i];
			}
	}
}
int main()
{
	cin >> n >> k;
	for(int i = 1;i < n;i++){
		int u, v;
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	dfs(1);
	cout << ans << '\n';
	return 0;
}