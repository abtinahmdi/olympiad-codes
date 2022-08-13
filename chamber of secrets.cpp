#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define pb push_back
#define f front()
#define p push
using namespace std;
const int N = 2 * 1e3 + 5;
char b[N][N];
vector<ll> gr[N];
ll dis[N];
bool seen[N];
ll n, m;
void bfs(int v)
{
	queue<ll> q;
	q.p(v);
	dis[v] = 0;
	seen[v] = true;
	while(q.size()){
		v = q.f;
		q.pop();
		for(auto i: gr[v]){
			if(!seen[i]){
				dis[i] = dis[v] + 1;
				seen[i] = true;
				q.p(i);
			}
		}
	}
}
void solve()
{
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> b[i][j];
			if(b[i][j] == '#'){
				gr[i].pb(j + n);
				gr[j + n].pb(i);
			}
		}
	}
	bfs(0);
	if(dis[n - 1] == 0){
		cout << -1 << '\n';
		exit(0);
	}
	cout << dis[n - 1] << '\n';
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}