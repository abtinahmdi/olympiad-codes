#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second
using namespace std;
const int N = 1e5 + 5;
vector< pair<int, int> > gr[N];
vector<int> ans;
pair<int, int> p1;
bool mark[N];
int n, u, v, k, dp[N];
void dfs(int v)
{
	mark[v] = true;
	for(auto p: gr[v]){
		if(!mark[p.f]){
			dfs(p.f);
			if(!p.s){
				dp[v] = dp[v] + dp[p.f];
				continue;
			}
			if(p.s && dp[p.f]){
				dp[v] = dp[v] + dp[p.f];
			}
			else if(p.s){
				ans.pb(p.f + 1);
				dp[v]++;
			}
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 0;i < n - 1;i++){
		cin >> u >> v >> k;
		u--, v--, k--;
		pair<int, int> p1;
		p1.f = u;
		p1.s = k;
		gr[v].pb(p1);
		p1.f = v;
		gr[u].pb(p1);
	}
	dfs(0);
	cout << dp[0] << endl;
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	return 0;
}