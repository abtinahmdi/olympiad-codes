#include<bits/stdc++.h>
#define ms(x) memset(x, 127, sizeof x)
#define ll long long
#define f first
#define se second
#define pb push_back
using namespace std;
const int N = 1e6 + 5;
ll n, m, s, u, v, w, l, r, ans, d[N];
vector< pair< pair<int , int> , int> > e;
vector< pair<int, int> > gr[N];
void dijkstra(int v)
{
	set<pair<int, int>> s;
	ms(d);
	d[v] = 0;
	s.insert({d[v], v});
	while(s.size()){
		v = (*s.begin()).se;
		s.erase(s.begin());
		for(auto h: gr[v]){
			int u = h.f;
			int w = h.se;
			if(d[u] > d[v] + w){
				s.erase({d[u], u});
				d[u] = d[v] + w;
				s.insert({d[u], u});
			}
		}
	}
}
int main()
{
	cin >> n >> m >> s;
	for(int i = 0;i < m;i++){
		cin >> u >> v >> w;
		u--, v--;
		gr[u].pb({v, w});
		gr[v].pb({u, w});
		e.pb({{v, u}, w});
	}
	cin >> l;
	s--;
	dijkstra(s);
	for(int i = 0;i < n;i++){
		if(d[i] == l){
			ans++;
		}
	}
	for(int i = 0; i < e.size(); i++){
		int a, b, c;
		a = e[i].f.f;
		b = e[i].f.se;
		c = e[i].se;
		if (l - d[a] > 0){
		    int r = l - d[a];
		    if (r + d[a] <= d[b] + c - r && r < c){
		    	ans++;
			}
		} 
		if (l - d[b] > 0){
		    int r = l - d[b];
		    if (r + d[b] <= d[a] + c - r && r < c){
		        if (r + d[b] == d[a] + c - r){
		            ans--;
		        }
		    	ans++;
			}
		} 
	}
	cout << ans << endl;
}