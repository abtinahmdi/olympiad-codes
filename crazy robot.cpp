#include<bits/stdc++.h>
#define ll long long
using namespace  std;
const int N = 1e6 + 5;
const ll INF = 1e17;
ll t, n, m, k, l, r;
string s[N];
bool isval(int x, int y){return x >= 0 && x < n && y < m && y >= 0;}
void dfs(int v, int u)
{
	r = 0;
	if(isval(v, u + 1))
		if(s[v][u + 1] == '.')
			r++;
	if(isval(v, u - 1))
		if(s[v][u - 1] == '.')
			r++;
	if(isval(v + 1,u))
		if(s[v + 1][u] == '.')
			r++;
	if(isval(v - 1,u))
		if(s[v - 1][u] == '.')
			r++;
	if(r < 2 || s[v][u] == 'L'){
		if(s[v][u] != 'L')s[v][u] = '+';
		if(isval(v, u + 1) && s[v][u + 1] == '.')dfs(v, u + 1);
		if(isval(v, u - 1) && s[v][u - 1] == '.')dfs(v, u - 1);
		if(isval(v + 1, u) && s[v + 1][u] == '.')dfs(v + 1, u);
		if(isval(v - 1, u) && s[v - 1][u] == '.')dfs(v - 1, u);
	}
}
void solve()
{
	k = INF;
	l = INF;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		for(int j = 0; j < m; j++){
			if(s[i][j] == 'L'){
				k = i;
				l = j;
			}
		}
	}
	if(k != INF)
		dfs(k, l);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << s[i][j];
		}
		cout <<'\n';
		s[i].clear();	
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}