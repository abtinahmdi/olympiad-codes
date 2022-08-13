#include<bits/stdc++.h>
using namespace std;
long long t, u, v;
void solve()
{
    cin >> u >> v;
    cout << -u * u << " " << v * v << '\n';
}
int main()
{
    cin >> t;
    while(t--){
        solve();
    }
}
