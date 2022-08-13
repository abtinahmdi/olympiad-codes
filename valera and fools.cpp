#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pii pair<int, int>
using namespace std;
const int N = 3e3 + 1e1;
queue<pair<pii, int>> q;
ll n, k, p[N], m[N], ans;
bool mark[N][N];
void bfs()
{
	mark[0][0] = true;
	q.push({{0, 1}, 0});
	while (!q.empty()){
		ll x = q.front().f.f;
		ll y = q.front().f.s;
		ll z = q.front().s;
		q.pop();
		ans++;
		if (y == n || z == k)
			continue;
		if (p[x] != 0 && m[y] != 0 && !mark[y + 1][y + 2] && y < n - 1){
			mark[y + 1][y + 2] = true;
			q.push({{y + 1, y + 2}, z + 1});
		}
		if (p[x] != 0 && p[y] != 0 && !mark[n][n] && y == n - 1){
			mark[n][n] = true;
			ans++;
		}
		if (p[x] != 0 && m[y] < 100 && !mark[x][y + 1]){
			mark[x][y + 1] = true;
			q.push({{x, y + 1}, z + 1});
		}
		if (m[y] != 0 && p[x] < 100 && !mark[y][y + 1]){
			mark[y][y + 1] = true;
			q.push({{y, y + 1}, z + 1});
		}
	}
}
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = n - 1; i >= 0; i--)
		m[i] = max(m[i + 1], p[i]);
	bfs();
	cout << ans << endl;
}