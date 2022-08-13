#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll n, k, x, y, ans = 1;
vector<int> gr[N];
bool mark[N];
void dfs(int v)
{
	mark[v] = true;
	for(auto i : gr[v]){
		if(!mark[i]){
			ans = ans * 2;
			dfs(i);
		}
	}
}
int main()
{
	cin >> n >> k;
	for(int i = 0;i < k;i++){
		cin >> x >> y;
		x--;
		y--;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	for(int i = 0;i < n;i++){
		if(!mark[i])
			dfs(i);
	}
	cout << ans << '\n';
}