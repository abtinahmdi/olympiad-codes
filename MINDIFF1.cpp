#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll t, n, m, k, l, ans, anss, cnt[N], vis[N];
vector<int> v;
void solve()
{
    cin >> n >> m;
    vector<int> g;
    memset(cnt,0,sizeof(cnt));
    for(int i = 0; i < m; i++){
		cin >> k >> l; 
		k--; 
		l--;
        g[k].push_back(l);
        g[l].push_back(k);
        cnt[k]++; 
		cnt[l]++;
    }
    set<pair<int,int>> s;
	memset(vis,0,sizeof(vis));
    for(int i = 0; i < n; i++){
        s.insert({cnt[i], i});
    }
    while(!s.empty()){
        pair<int,int> now = *s.begin();
        s.erase(now);
        vis[now.second]=1;
        v.push_back(now.second);
        for(auto i: g[now.second]){
            if (!vis[i]){
                cnt[i]--;
                s.erase({cnt[i] + 1, i});
                s.insert({cnt[i], i});
            }
        }
    }
    int val[n];
    for(int i = 0; i < n; i++){
        val[order[i]] = n - i;
    }
    for(int i=0; i<n; i++){
        for(auto j: g[i]){
            if (val[i]>val[j]) 
				anss++;
        }
        ans = max(ans,anss);
    }
    cout << ans << '\n';
    for(int i = 0; i < n; i++){
        cout << val[i] << ' ';
    }
    cout << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}