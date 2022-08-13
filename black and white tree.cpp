#include<bits/stdc++.h>
#define pb push_back
using namespace std;
const int n = 1e6 + 6;
int n, u, v, cnt;
vector<int> gr[n];
long long dfs(int v, int par){
	int k = 1;
	for(auto i : gr[v]){
		if(v != par && dfs(i, v) && k){
			cnt++;
			k = 0;
		}
	}
	return k;
}
int main(){
	cin >> n;
	for(int i = 1;i < n;i++){
		cin >> u >> v;
		gr[v].pb(u);
		gr[u].pb(v);
	}
	dfs(1, 0);
	if(cnt * 2 == n)
		cout << "second" << '\n';
	else
		cout << "first" << '\n';
}
