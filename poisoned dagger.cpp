#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e2 + 2e1;
ll n, h;
ll tme[N];
bool ok(ll mid) 
{
    ll s = 0;
	for (int i = 0; i < n; i++){
		if(n - 1 == i) 
			s += mid;
		else
			s += min(tme[i + 1] - tme[i], mid);
	}
	return s >= h;
}
void solve()
{
	cin >> n >> h;
	for(int i = 0;i < n;i++){
		cin >> tme[i];
	}
	ll l = 0, r = h;
	while(r - l >= 2){
		ll mid = (r + l) / 2;
		if(ok(mid)){
			r = mid;
		}
		else{
			l = mid;
		}
	}
	cout << l + 1 << '\n';
}
int main()
{
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
}