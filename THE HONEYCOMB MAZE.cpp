#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int r[] = {1, 0, -1, 0};
int c[] = {0, 1, 0, -1};
bool bfs(int i, int j, vector<vector<char>> &a, int n, int m, int ei, int ej, int k)
{
	a[i][j] = '*';
	for(int k = 0;k < 4;k++){
		int ci = i + r[k];
		int cj = j + c[k];
		if(ci >= 0 && ci < n && cj >= 0 && cj < m){
			if(ci == ei && cj == ej){
				if(k - 1 <= 0){
					return true;
				}
			}
			else if(a[ci][cj] != '*'){
				if(bfs(ci, cj, a, n, m, ei, ej, k - 1)){
					return true;
				}
			}
		}
	}
	a[i][j] = '.';
	return false;
}
int main()
{
	int n, m, s, e, k;
	cin >> n >> m >> k >> s >> e;
	vector<vector<char>> a(N);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	--s, --e;
	if(bfs(s, e, a, n, m, s, e, k))
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}