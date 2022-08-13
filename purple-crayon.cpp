#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;
const int N = 2e5 + 7;
ll n, m, u, v;
vll gr[N];
vll c;
ll dfs(int v, int p){
	int x = v;
	for(auto i: gr[v]){
		if(i != p){
			int y = dfs(i, v);
			if(c[y] > c[x])
				y = x;
		}
	}
	c[x]++;
	return x;
}
ll f(int x){
	return x / 2 * (x - x / 2);
}
int main(){
	cin >> n >> m;
	c.assign(n, 0);
	for(int i = 0;i < n - 1;i++){
		cin >> u >> v;
		u--, v--;
		gr[v].pb(u);
		gr[u].pb(v);
	}
	dfs(0, 0);
	sort(c.begin(), c.end(), greater<int>());
	c.erase(lower_bound(c.begin(), c.end(), 0, greater<int>()), c.end());
	ll ans = 0;
	ll cs = c.size() ;
	if (m >= cs){
		if (cs > n-cs) 
			ans = cs*(n-cs);
		else if (m <= n - m) 
			ans = m * (n - m);
		else 
			ans = f(n);
	}
	else{
		ll w = 0;
		for (int i = 0; i < m; i++) {
			w += c[i] - 1;
		}
		ll b = n - w - m;
		if (b > m){
			b -= m;
			if (w >= b) 
				ans = -1 * w * b;
			else 
				ans = -1 * f(w + b);
		}
		else{
			ans = (m - b) * w;
		}
	}
	cout << ans << '\n';

	return 0;
}
