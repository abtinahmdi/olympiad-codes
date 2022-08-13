#include<bits/stdc++.h>
using namespace std;
int t, n, k;
void solve()
{
    cin >> n >> k;
    cout << ((n * k)+ 2) / 3 << '\n';
}
int main()
{
    cin >> t;
    while(t--){
        solve();
    }
}
