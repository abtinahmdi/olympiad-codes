#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int t, n, k, x, y;
int a1[N], a2[N];
bool mark[N];
void dfs(int v)
{
	mark[v] = true;
	for(int i = 0;i < k;i++)
		if(!mark[i])
			if((a1[i] < a1[v] && a1[v] < a2[i]) || (a1[i] < a2[v] && a2[v] < a2[i]))
				dfs(i);
}
void solve()
{
	cin >> n;
	if(n == 1){
		cin >> a1[k] >> a2[k];
		k++;
	}
	else{
		cin >> x >> y;
		x -= 1;
		y -= 1;
		for(int i = 0;i < k;i++){
			mark[i] = 0;
		}
		dfs(x);
		if(mark[y])
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}