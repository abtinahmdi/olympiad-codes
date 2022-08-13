#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, ans = 1, h[N];
bool mark[N], isRoot[N];
vector<int> graph[N];
void dfs(int v, int par = -1)
{
	mark[v] = true;
	if(par != -1){
		h[v] = h[par] + 1;
		ans = max(h[v], ans);
	}
	for(auto u: graph[v]){
		if(!mark[u])
			dfs(u, v);
	}
}
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> k;
		if(k == -1)
			isRoot[i] = true;
		else{
			isRoot[i] = false;
			graph[k - 1].push_back(i);
		}
	}
	for(int i = 0;i < n;i++){
		if(isRoot[i]){
			h[i] = 1;
			dfs(i);
		}
	}
	cout << ans << '\n';
}