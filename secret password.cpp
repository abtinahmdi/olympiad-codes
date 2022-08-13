#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 150;
vector<int> gr[N];
bool mark[N];
int n, ans;
string s;
void dfs(int v)
{
	mark[v] = true;
	for(auto u : gr[v]){
		if(!mark[u]){
			dfs(u);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		for(char c : s){
			gr[i].push_back(n + c - 'a');
			gr[n + c - 'a'].push_back(i);
		}
	}
	for(int i = 0;i < n + 26;i++){
		if(!gr[i].empty() && !mark[i]){
			dfs(i);
			ans++;
		}
	}
	cout << ans;
}