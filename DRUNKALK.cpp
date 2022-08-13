#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
    ll testcase;
    cin >> testcase;
    for(ll i = 0 ; i<testcase ; i++) {
        ll n;
        cin >> n;
        ll tmp = n / 2;
        ll res = tmp * 2 + ( n % 2 == 0? 0 : 3);
        cout << res << '\n';
    }
    return 0;
}