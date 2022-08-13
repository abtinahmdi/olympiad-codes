#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, m, rb, cb, rd, cd, ans, st, st2;
void solve()
{
	cin >> n >> m >> rb >> cb >> rd >> cd;
	st = 1;
	st2 = 1;
    while (true){
        if(rb == rd || cb == cd) 
			break;
        if(rb + st > n || rb + st < 1) 
			st *= -1;
        if(cb + st2 > m || cb + st2 < 1) 
			st2 *= -1;
        rb += st;
        cb += st2;
        ans++;
    }
    cout << ans << '\n';
    ans = 0;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}