#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0;i < n;i++)
        cin>>arr[i];
    sort(arr, arr + n);
    ll ans = 0;
    for(ll i = 1;i < n;i++)
        ans = __gcd(ans, arr[i] - arr[i - 1]);
    if (ans == 0){
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}
int main()
{
    FAST1;
    FAST2;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}