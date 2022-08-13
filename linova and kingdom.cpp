#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 2e5 + 5;
bool mark[N];
ll h[N], w[N], d[N], n, k, u, v, ans;
vector<ll> gr[N];
void dfs(ll v)
{
	mark[v] = true;
	for(auto u: gr[v]){
		if(!mark[u]){
			h[u] = h[v] + 1;
			dfs(u);
			w[v] = w[v] + w[u] + 1;
		}
	}
}
int main()
{
	cin >> n >> k;
	for(int i = 0;i < n - 1;i++){
		cin >> u >> v;
		d[u - 1] += 1;
		d[v - 1] += 1;
		gr[u - 1].pb(v - 1);
		gr[v - 1].pb(u - 1);
	}
	dfs(0);
	for(int i = 0;i < n;i++){
		w[i] = h[i] - w[i];
	}
	sort(w, w + n);
	reverse(w, w + n);
	for(int i = 0;i < k;i++){
		ans = ans + w[i];
	}
	cout << ans;
}