#include<bits/stdc++.h>
#define ll long long
#define f first
#define sec second
#define pll pair <ll, ll>
using namespace std;
const int N = 1e3 + 5;
pair<ll,ll> l;
bool mark[N][N];
char c[N][N];
ll dis[N][N];
queue <pll> q;
ll n, m, ans, asghar, ghazam;
bool ok(ll n, ll k)
{
	return n >= 0 && k >= 0 && n < n && k < m && c[n][k] != 'T';
}
void ez(ll n, ll k, ll l, ll r)
{
	dis[n][k] = dis[l][r] + 1;
	mark[n][k] = true;
}
void bfs(ll s, ll p)
{
	mark[s][p] = true;
	q.push({s, p});
	dis[s][p] = 0;
	while(q.size()){
		l = q.front();
		q.pop();
		mark[l.first][l.second] = true;
		ll n = l.first;
		ll k = l.second;
		if(ok(n - 1, k) && !mark[n - 1][k]){
			ez(n - 1, k, l.first, l.second);
			q.push({n - 1, k});
		}
		if(ok(n, k - 1) && !mark[n][k - 1]){ 
			ez(n, k - 1, l.first, l.second); 
			q.push({n, k - 1});
		}
		if(ok(n + 1, k) && !mark[n + 1][k]){ 
			ez(n + 1, k, l.first, l.second); 
			q.push({n + 1, k});
		}
		if(ok(n, k + 1) && !mark[n][k + 1]){
			ez(n, k + 1, l.first, l.second); 
			q.push({n, k + 1});
		}
	}
}
void solve()
{
	ll asghar, ghazam;
	cin >> n >> m;
	for (ll i = 0; i < n; i++){
		for (ll j = 0; j < m; j++){
			dis[i][j] = 1e7 + 7;
			cin >> c[i][j];
			if(c[i][j] == 'E'){
				asghar = i;
				ghazam = j;
			}
		}
	}
	ll ans = 0;		
	bfs(asghar, ghazam);
	for (ll i = 0; i < n; i++){
		for (ll j = 0; j < m; j++){
			if(c[i][j] == 'S'){
				asghar = i; 
				ghazam = j;
			}
		}
	}
	for (ll i = 0; i < n; i++){
		for (ll j = 0; j < m; j++){
			if(dis[i][j] <= dis[asghar][ghazam] && c[i][j] != 'T' && c[i][j] != 'S' && c[i][j] != 'E')
				ans += c[i][j] - '0';
		}
	}
	cout << ans << "\n";
}
int main()
{
	solve();
}