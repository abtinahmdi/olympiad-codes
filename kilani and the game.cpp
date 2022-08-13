#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N = 1001;
queue<pair<int,int>> q[9];
char g[N][N];
int dis[N][N], ans[9], s[9], n, m, p;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
void bfs()
{
	int t = 0;
	bool cmp = 1;
	while(cmp){
		t++;
		cmp = 0;
		for(int i = 0;i < p ;i++){
			while(q[i].size()){
				int x = q[i].front().f;
				int y = q[i].front().s;
				if(dis[x][y] >= t * s[i])
					break;
				q[i].pop();
				for(int j = 0;j < 4;j++){
					int nx = x + dx[j], ny = y + dy[j];
					if(nx < 0 || ny < 0 || nx == n || ny == m || g[nx][ny] != '.' || dis[nx][ny] != -1)
						continue;
					dis[nx][ny] = dis[x][y] + 1;
					g[nx][ny] = i + '1';
					q[i].push(make_pair(nx,ny));
					cmp = 1;
				}
			}
		}
	}
}
int main()
{
	cin >> n >> m >> p;
	memset(dis, -1, sizeof dis);
	for(int i = 0;i < p;i++)
		cin >> s[i]; 
	for(int i = 0;i < n;i++)
		cin >> g[i];
    for(int i = 0;i < n;i++)
	    for(int j = 0;j < m;j++)
			if(g[i][j] != '.' && g[i][j] != '#'){
				dis[i][j] = 0;
				q[g[i][j] - '1'].push(make_pair(i,j) );
			} 
	bfs();
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			if(g[i][j] != '#' && g[i][j] != '.')
				ans[g[i][j] - '0' - 1]++;
	for(int i = 0;i < p;i++)
		cout << ans[i] << " ";
	return 0; 
}