#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1e5 + 10;
vector<int> gr[N];
queue<int> q;
int dist[N][107];
int n, m, k, s, a[N];
void bfs(int i)
{
    for(int x = 1 ; x <= n ; x++)
        if(a[x] == i)
            dist[x][i] = 0 , q.push(x);
    while(q.size()){
    	int s = q.front();
        for(int u : gr[s]){
            if(dist[u][i] > dist[s][i] + 1){
                dist[u][i] = dist[s][i] + 1;
                q.push(u);
            }
        }
        q.pop();
    }
}
void solve()
{
    memset(dist , 63 , sizeof dist);
    cin >> n >> m >> k >> s;
    for(int i = 1;i <= n;i++)
    	cin >> a[i];
    for(int i = 0;i < m;i++){
        int u , v;
        cin >> u >> v;
        gr[u].pb(v);
        gr[v].pb(u);
    }
    for(int i = 1;i <= k;i++)
        bfs(i);
    for(int i = 1;i <= n;i++){
        sort(dist[i] + 1 , dist[i] + k + 1);
        int ans = 0;
        for(int j = 1;j <= s;j++)
            ans += dist[i][j];
        cout << ans << " ";
    }
    cout << '\n';
    return;
}
int main()
{
    solve();
	return 0;
}