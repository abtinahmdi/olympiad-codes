#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e2 + 5;
vector<int> gr[N][N];
bool mark[N];
ll n, m, ans, ai, bi, ci, u, v;
void dfs(int v, int u)
{
	mark[v] = true;
	for(auto p: gr[v][u]){
		if(!mark[p])
			dfs(p, u);
	}
}
void solve()
{
	cin >> u >> v;
	for(int i = 1; i <= m; i++){
		if(gr[u][i].size() != 0){
			memset(mark,false,N);
			dfs(u,i);
			if(mark[v])
				ans ++;
		}
	}
	cout << ans << endl;
	ans = 0;
}
int main()
{
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> ai >> bi >> ci;
		gr[bi][ci].push_back(ai);
		gr[ai][ci].push_back(bi);
	}
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
}