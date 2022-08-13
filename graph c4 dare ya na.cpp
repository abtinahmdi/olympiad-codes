#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 2e3 + 3e2;
vector<ll> adj[N];
bool mark[N];
void read_input()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[v].pb(u);
		adj[u].pb(v);
	}
}
void solve()
{
	for(int u = 0;u < n;u++){
		for(int v: adj[u]){
			for(int w: adj[v]){
				if(mark[u][w]){
					cout << "YES" << '\n';
					return;
				}
			}
		}
	}
	cout << "NO" << '\n';
}
int main()
{
	read_input(), solve();
}