#include<bits/stdc++.h>
using namespace std;
const long long N = 1e3 + 5;
long long f1[N][N], f2[N][N], g1[N][N], g2[N][N], a[N][N], ans;
int n, m;
int main()
{
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j++)
			cin >> a[i][j];
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j++)
			f1[i][j] = max(f1[i - 1][j], f1[i][j - 1]) + a[i][j];
	for(int i = 1;i <= n;i++)
		for(int j = m;j >= 1;j--)
			g1[i][j] = max(g1[i - 1][j], g1[i][j + 1]) + a[i][j];
	for(int i = n;i >= 1;i--)
		for(int j = 1;j <= m;j++)
			g2[i][j] = max(g2[i + 1][j], g2[i][j - 1]) + a[i][j];
	for(int i = n;i >= 1;i--)
		for(int j = m;j >= 1;j--)
			f2[i][j] = max(f2[i + 1][j], f2[i][j + 1]) + a[i][j];
	for(int i = 2;i < n;i++)
		for(int j = 2;j < m;j++)
			ans = max(ans, max(f1[i - 1][j] + f2[i + 1][j] + g2[i][j - 1] + g1[i][j + 1], f1[i][j - 1] + f2[i][j + 1] + g2[i+1][j] + g1[i - 1][j]));
	cout<<ans;
    return 0;
}