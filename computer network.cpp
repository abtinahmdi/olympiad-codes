#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
vector< pair<int, int> > gr[N];
bool mark[N];
int dist[N], dist2[N];
int n, u, w;
void dfs(int v)
{
	mark[v] = true;
	for(auto p: gr[v]){
		int u = p.first;
		int w = p.second;
		if(!mark[u]){
			dist[u] = dist[v] + w;
			dfs(u);
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 1;i < n;i++){
		cin >> u >> w;
		gr[u - 1].push_back({i, w});
		gr[i].push_back({u - 1, w});
	}
	dist[0] = 0;
	dfs(0);
	int v = 0;
	int dis1 = 0;
	for(int i = 0;i < n;i++){
		if(dis1 < dist[i]){
			dis1 = dist[i];
			v = i;
		}
	}
	dist[v] = 0;
	memset(mark, false, sizeof mark);
	dfs(v);
	int u = 0;
	int dis2 = 0;
	for(int i = 0;i < n;i++){
		dist2[i] = dist[i];
		if(dis2 < dist[i]){
			dis2 = dist[i];
			u = i;
		}
	}
	dist[u] = 0;
	memset(mark, false, sizeof mark);
	dfs(u);
	for(int i = 0;i < n;i++){
		cout << max(dist2[i], dist[i]) << '\n';
	}
}