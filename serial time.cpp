#include<bits/stdc++.h>
using namespace std;
int k, n, m, x, y, cnt, ans;
char b[17][17][17];
bool cmp(int i, int j, int p)
{
	if(b[i][j][p] == '#' || i > k || i < 1 || j > n || j < 1 || p > m || p < 1) 
		return false;
	return true;
}
void dfs(int i, int j, int p)
{
	if(cmp(i, j, p)){
		ans += 1;
		b[i][j][p] = '#';
		dfs(i - 1, j, p);
		dfs(i - 1, j, p);
		dfs(i, j - 1, p);
		dfs(i, j + 1, p);
		dfs(i, j, p - 1);
		dfs(i, j, p + 1);
	}
}
int main()
{
	cin >> k >> n >> m;
	for(int p = 0;p < k;p++){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cin >> b[p][i][j];
			}
		}
	}
	cin >> x >> y;
	dfs(1, x, y);
	cout << ans << '\n';
}