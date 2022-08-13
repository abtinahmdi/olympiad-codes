#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
ll n, k, m, dp[N];
ll solve(ll x, vector<ll> &need, vector<vector<ll>> &v, set<ll> &s)
{
    if(dp[x] != -1)
		return dp[x];
    s.insert(x);
    if(v[x - 1].size() == 0) {
        return need[x - 1];
    }
    long long res = need[x-1];
    for(long long x : v[x - 1]) {
        s.insert(x);
        res += solve(x,need,v,s);
    }
    dp[x]=res;
    return res;
}
int main() 
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<ll> need;
    vector<vector<long long> > v;
    for(long long i = 0 ; i < n ; i++) {
        cin >> k;
        need.push_back(k);
        long long m;
        cin >> m;
        vector<long long> v2(m);
        for(long long i = 0 ; i < m ; i++) {
            cin >> v2[i];
        }
        v.push_back(v2);
    }
    set<ll> s;
    memset(dp,-1,sizeof dp);
    solve(n,need,v,s);
    long long res = 0;
    for(long long x : s) {
        res += need[x - 1];
    }
    cout << res << '\n';
    return 0;
}