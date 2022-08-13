#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, k;
void solve()
{
    cin >> n;
    k = n;
    for(ll i = 2;i <= i * n;i++){
        if(n % i == 0){
            k = i;
            break;
        }
    }
    cout << n / k << " " << n - (n / k) << '\n';
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--){
        solve();
    }
}
