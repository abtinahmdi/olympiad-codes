#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, v, ans;
vector<int> gr[N];
bool mark[N][N];
void dfs(int n, int k)
{
	mark[n][k] = true;
	for(int u : gr[k]){
		if(!mark[k][u]){
			ans = u;
			dfs(k, u);
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> v;
		gr[i].push_back(v);
	}
	for(int i = 1;i <= n;i++){
		memset(mark, false, sizeof mark);
		dfs(0, i);
		cout << ans << " ";
	}
	cout << '\n';
}