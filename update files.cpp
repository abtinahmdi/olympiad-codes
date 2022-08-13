#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, f, cnt;
void solve()
{
    cin >> n >> k;
    f = 1;
    while(f <= k && f < n){
        f *= 2;
        cnt++;
    }
    if(f < n)
        cnt += (n - f + k - 1) / k;
    cout << cnt << '\n';
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}