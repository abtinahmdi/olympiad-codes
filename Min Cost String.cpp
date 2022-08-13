#include<bits/stdc++.h>
using namespace std;
int n, k;
int alp[26];
vector<int> p;
void dfs(int v)
{
	while(alp[v] < k){
		int u = alp[v]++;
		dfs(u);
		p.push_back(u);
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	dfs(0);
	cout << "a" ;
	for(int i = 0;i < n - 1;i++){
		cout << char(p[i % p.size()] + 'a');
	}
	return 0;
}