#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<int> gr[N];
int a[N];
int b[N];
bool mark[N];
long long ans[N];
long long ans2[N];
bool f = false;
void dfs(int u, int par = -1)
{
	mark[u] = 1;
	if(par != -1){
		if(a[u] < a[par]){
			cout << -1 << endl;
			f = true;
			return;
		}
	}
	for(int i = 0; i < gr[u].size(); i++){
		if(mark[gr[u][i]] == 0){
			dfs(gr[u][i], u);
		}
		if(f){
			return;
		}
	}
}
void solve()
{
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++){
		int e;
		cin >> e;
		e--;
		if(e == i){
			x = i;
			continue;
		}
		gr[i].push_back(e);
		gr[e].push_back(i);
	}
	for (int i = 0; i < n; i++){
		int e;
		cin >> e;
		a[e - 1] = i;
		b[i] = e - 1;
	}
	f = 0;
	dfs(x);
	if (f == 1){
		memset(mark, 0, n);
		memset(a, 0, n);
		memset(b, 0, n);
		for (int i = 0; i < n; i++){
			gr[i].clear();
		}
		memset(ans, 0, n);
		memset(ans2, 0, n);
		return;
	}
	for (int i = 0; i < n; i++){
		if (i == 0){
			ans[b[i]] = 0;
			continue;
		}
		bool c = 0;
		for(int j = 0; j < gr[b[i]].size(); j++){
			if (gr[b[i]][j] == b[i - 1]){
				c = 1;
				break;
			}
		}
		if (c == 1){
			ans[b[i]] = 10;
			ans2[b[i]] += 10;
			for (int j = 0; j < gr[b[i]].size(); j++){
				ans2[gr[b[i]][j]] += ans2[b[i]];
			}
			continue;
		}
		ans[b[i]] = ans2[b[i - 1]] + 10 - ans2[b[i]];
		if (ans[b[i]] <= 0){
			ans[b[i]] = 1;
		}
		ans2[b[i]] += ans[b[i]];
		for (int j = 0; j < gr[b[i]].size(); j++){
			ans2[gr[b[i]][j]] += ans2[b[i]];
		}
	}
	memset(mark, 0, n);
	memset(a, 0, n);
	memset(b, 0, n);
	f = 0;
	for (int i = 0; i < n; i++){
		cout << ans[i] << " ";
		gr[i].clear();
		ans[i] = 0;
		ans2[i] = 0;
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		solve();
	}
}