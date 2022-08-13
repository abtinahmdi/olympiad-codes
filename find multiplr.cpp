#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = b - b % c;
    if (ans >= a)
        cout << ans << endl;
    else
        cout << -1 << endl;
}
int main()
{
    cout << fixed << setprecision(20);
    int t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}