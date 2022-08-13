#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;
const int N = 2e5 + 5;
pair<ll, ll> vr[N];
vector<ll> adj[N];
bool mark[N];
ll dp[N][9], n;
void dfs(int v)
{
	mark[v] = true;
	for(auto p: adj[v]){
		if(!mark[p]){
			dfs(p);
			dp[v][0] += max(dp[p][0] + abs(vr[p].f - vr[v].f), dp[p][1] + abs(vr[p].s - vr[v].f));
            dp[v][1] += max(dp[p][0] + abs(vr[p].f - vr[v].s), dp[p][1] + abs(vr[p].s - vr[v].s));
		}
	}
}
void solve()
{
	memset(mark, false, sizeof mark);
	memset(dp, 0, sizeof mark);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> vr[i].f >> vr[i].s;
	}
	for(int i = 0;i <= n - 2;i++){
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	dfs(0);
	cout << max(dp[0][0], dp[0][1]) << '\n';
}
int main()
{
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
}