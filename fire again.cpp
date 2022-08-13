#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std; 
const int N = 2e3 + 5;
const int INF = 1e8 + 8;
queue <pair<int, int>> q;
int dis[N][N];
bool mark[N][N];
ll n, m, ans, k, x, y;
void pr(int d, int f)
{
	for (int i = 0; i < d; i++){
		for (int j = 0; j < f; j++){
			dis[i][j] = INF;
		}
	}
}
bool ok(int a, int b)
{
	return a > -1 && b > -1 && a < n && b < m;
}
void ez(int n, int k, int x, int y)
{
	dis[n][k] = min(dis[x][y] + 1, dis[n][k]);
	mark[n][k] = true;
}
void bfs(int i, int j)
{
	pair<int,int> p;
	mark[i][j] = true;
	q.push({i, j});
	dis[i][j] = 0;
	while(q.size()){
		p = q.front();
		q.pop();
		mark[p.f][p.s] = true;
		int a = p.f;
		int b = p.s;
		if(ok(a - 1, b) && !mark[a - 1][b]){
			ez(a - 1, b, p.f, p.s), 
			q.push({a - 1, b});
		}
		if(ok(a, b - 1) && !mark[a][b - 1]){ 
			ez(a, b - 1, p.f, p.s); 
			q.push({a, b - 1});
		}
		if(ok(a + 1, b) && !mark[a + 1][b]){
			ez(a + 1, b, p.f, p.s); 
			q.push({a + 1, b});
		}
		if(ok(a, b + 1) && !mark[a][b + 1]){
			ez(a, b + 1, p.f, p.s);
			q.push({a, b + 1});
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
	cin >> n >> m;
	pr(n + 1, m + 1);
	cin >> k;
	for (int i = 0; i < k; i++){
		cin >> x >> y;
		bfs(x - 1, y - 1);
		for (int j = 0; j < n; j++){
			for (int k = 0; k < m; k++){
				mark[j][k] = false;
			}
		}
	}
	pair <int,int> p1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if(dis[i][j] > ans) 
				ans = dis[i][j], p1.f = i, p1.s = j;
	cout << p1.f + 1 << " " << p1.s + 1 << "\n";
}