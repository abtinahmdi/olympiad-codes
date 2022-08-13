#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5e1;
vector<ll> adj[N];
bool mark[N], c[N];
ll n, m, ans, dp[N];
void dfs(int v)
{
	mark[v] = true;
	for(auto u: adj[v]){
		if(!mark[u]){
			if(c[u]){
				dp[u] = dp[u] + dp[v] + 1;
			}
			if(dp[u] > m){
				continue;
			}
			dfs(u);
			if(1 == adj[u].size() && u){
				ans++;
			}
		}
	}
}
int main()
{
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> c[i];
	}
	for(int i = 0;i < n - 1;i++){
		ll u, v;
		cin >> u >> v;
		u--, v--;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	if(c[0]){
		dp[0] += 1;
	}
	dfs(0);
	cout << ans << '\n';
}