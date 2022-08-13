#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ll t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        ll d;
        cin >> d;
        vector<ll> v;
        ll now = x;
        for(int i = 0 ; i < 4 ; i++) {
            long long min=i+1;
            if(now&1)
                now += min;
            else
                now -= min;
            v.push_back(now);
        }
        ll tmp = d % 4;
        if(tmp == 2 || tmp == 0) {
            if(tmp == 0)
                tmp += 4;
            cout << v[tmp-1] << '\n';
        } 
		else {
            if(tmp==1) {
                d--;
                long long a = d/4.0;
                if(x&1)
                    cout << v[tmp-1]+a*4 << '\n';
				else
                    cout << v[tmp-1]-a*4 << '\n';
            }
			else {
                d--;
                long long a = d/4.0;
                if(x&1)
                    cout << v[tmp-1]-a*4 << '\n';
				else
                    cout << v[tmp-1]+a*4 << '\n';
            }
        }
    }
    return 0;
}
