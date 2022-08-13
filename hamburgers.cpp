#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll b, s, c, nb, ns, nc, pb, ps, pc, r, n;
bool ok(ll x)
{
    n  = max((ll)0, (x * b - nb) * pb);
    n += max((ll)0, (x * s - ns) * ps);
    n += max((ll)0, (x * c - nc) * pc);
    return n <= r;
}
int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
        if (a[i] == 'B')
            b++;
        else if (a[i] == 'S')
            s++;
        else
            c++;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    ll l = 0, r = 1e15;
    while (r - l > 1)
    {
        ll mid = (r + l) / 2;
        (ok(mid)? l: r) = mid;
    }
    cout << l << endl;
    return 0;
}