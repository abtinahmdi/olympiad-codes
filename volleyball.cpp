#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1e3 + 7;
int n, m, f, s;
ll cost[N], dis[N];
vector<pair<ll, ll>> adj[N];
pair<ll, ll> txi[N];
void dij(int x)
{
    for (int i = 1; i <= n; i++) {
        dis[i] = LONG_LONG_MAX;
    }
    dis[x] = 0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> q;
    q.push({0, x});
    while (q.size()) {
        int v = q.top().second;
        ll w = q.top().first;
        q.pop();
        if (w != dis[v]) {
            continue;
        }
        for (auto u : adj[v]) {
            if (w + u.second < dis[u.first]) {
                dis[u.first] = w + u.second;
                q.push({dis[u.first], u.first});
            }
        }
    }
}
void solve()
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    for (int i = 1; i <= n; i++) {
        cost[i] = LONG_LONG_MAX;
    }
    cost[f] = 0;
    q.push({0, f});
    while (q.size()) {
        int v = q.top().second;
        ll w = q.top().first;
        q.pop();
        if (w != cost[v]) {
            continue;
        }
        dij(v);
        ll tmp = w + txi[v].second;
        for (int i = 1; i <= n; i++) {
            if (dis[i] <= txi[v].first && cost[i] > tmp) {
                cost[i] = tmp;
                q.push({tmp, i});
            }
        }
    }
    cout << (cost[s] == LONG_LONG_MAX ? -1 : cost[s]) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, c;
    cin >> n >> m >> f >> s;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        adj[a].pb({b, c});
        adj[b].pb({a, c});
    }
    for (int i = 1; i <= n; i++) {
        cin >> txi[i].first >> txi[i].second;
    }
    solve();
}
