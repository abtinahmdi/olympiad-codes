#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;
const int mat[4][2] = {0,1,0,-1,1,0,-1,0};
const int N = 1e3 + 5;
queue<pll> q;
int n, m, mx, dist[N][N];
void bfs()
{
	while(!q.empty()){
		pll p = q.front(); 
		q.pop();
		for(int i = 0;i < 4 ;i++){
			ll x = p.first + mat[i][0];
			ll y = p.second + mat[i][1];
			if(x && x <= n && y && y <= m && dist[x][y] == -1){
				mx = max(mx , dist[x][y] = dist[p.first][p.second] + 1);
				q.push(pll(x , y));
			}
		}
	}
}
int main()
{
	cin >> n >> m; 
	memset(dist , -1 , sizeof(dist));
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j){
			char c; 
			cin >> c;
			if(c == '#'){
				dist[i][j] = 0; 
				q.push(pll(i , j));
			}
		}
	bfs();
	cout << mx;
}