#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll n, m, a, j, b[N], p[N];
bool ok(int x)
{
    ll money = 0;
    for (int i = 0; i < x; i++)
        money += max(0ll, p[i] - b[n - x + i]);
    return money <= a;
}
int main()
{
	cin >> n >> m >> a;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
        cin >> p[i];
    sort(b, b + n);
    sort(p, p + m);
    int l = 0, r = min(n + 1, m + 1);
    while (r - l > 1){
        int mid = (l + r) / 2;
        if (ok(mid))
            l = mid;
        else
            r = mid;
    }
    int e = 0;
    for (int i = 0; i < l; i++)
        e += p[i];
    e = max(0ll, e - a);
    cout << l << " " << e << endl;
    return 0;
}