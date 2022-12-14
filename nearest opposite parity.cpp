#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int n;
vector<int> a, ans;
vector<vector<int>> g;
void bfs(const vector<int> &start, const vector<int> &end) 
{
	vector<int> d(n, INF);
	queue<int> q;
	for (auto v : start) {
		d[v] = 0;
		q.push(v);
	}
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (auto to : g[v]) {
			if (d[to] == INF) {
				d[to] = d[v] + 1;
				q.push(to);
			}
		}
	}
	for (auto v : end) {
		if (d[v] != INF) {
			ans[v] = d[v];
		}
	}
}
int main() 
{
	cin >> n;
	vector<int> a(n);
	vector<vector<int>> g(n);
	vector<int> even, odd;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] & 1)
			odd.push_back(i);
		else 
			even.push_back(i);
	}
	for (int i = 0; i < n; ++i) {
		int lf = i - a[i];
		int rg = i + a[i];
		if (0 <= lf) 
			g[lf].push_back(i);
		if (rg < n) 
			g[rg].push_back(i);
	}
	vector<int> ans(n, -1);
	bfs(odd, even);
	bfs(even, odd);
	for (auto it : ans) 
		cout << it << " ";
	cout << endl;
	return 0;
}