#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 2e6 + 5;
const ll mod = 1e9 + 7;
int n, m, k, u, v, mark[N];
vector<ll> ans, edge[N];
void dfs(int v){
	mark[v] = 1;
	ans.pb(v);
	for(auto i: edge[v]){
		if(mark[i])
			continue;
		dfs(i);
		if(k)
			return;
	}
	k = 1;
}
void solve(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> u >> v;
		edge[u].pb(v);
		edge[v].pb(u);
	}
	k = 0;
	dfs(1);
	reverse(ans.begin(), ans.end()), ans.pop_back();
	k = 0;
	dfs(1);
	cout << ans.size() << '\n';
	for(auto i: ans){
		cout << i << " ";
	}
	cout << '\n';
}
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}
