#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> gr[N];
bool vis[N];
int n, m, a, b;
void dfs(int v)
{
	vis[v] = true;
	for(int u = 0;u < gr[v].size();u++){
		if(!vis[gr[v][u]])
			dfs(gr[v][u]);
	}
}
int main()
{
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> a >> b;
		--a, --b;
		gr[a].push_back(b);
		gr[b].push_back(a);
	}
	dfs(0);
}