#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 4;
vector<pair<int, int>> gr[N];
long long d[N];
void djikstra(int v)
{
	set<pair<int, int>> s;
	memset(d, 127, sizeof d);
	d[v] = 0;
	s.insert({d[v], v});
	while(s.size()){
		v = (*s.begin()).second;
		s.erase(s.begin());
		for(auto nei: gr[v]){
			int u = nei.first;
			int w = nei.second;
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
	int n, m, s, l;
	cin >> n >> m >> s;
	for (int i = 0; i < m; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		ed[u].push_back(pii(v, w));
		ed[v].push_back(pii(u, w));
		vv[u].push_back(pii(v, w));
	}
	cin >> l;
	dijstra(s);
	int ans = 0, cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] == l)
			ans++;
		for (auto j : vv[i]){
			int u = i, v = j.first, w = j.second;
			if ((dis[u] < l) && (l - dis[u] < w) && (w - (l - dis[u]) > l - dis[v]))
				ans++;
			if ((dis[v] < l) && (l - dis[v] < w) && (w - (l - dis[v]) > l - dis[u]))
				ans++;
			if ((dis[v] < l) && (dis[u] < l) && (dis[u] + dis[v] + w == l * 2))
				ans++;
		}
	}
	cout << ans << endl;
}