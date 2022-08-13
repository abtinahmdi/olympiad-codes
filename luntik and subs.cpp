//???? ??? ?????
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
ll t, n, k, l, r, tmp;
ll pwr(ll x, ll y)
{
	if(!y)
		return 1;
	ll res = pwr(x, y / 2);
	res *= res;
	res %= mod;
	if (y % 2)
		res *= x;
	return res;
}
void solve()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> k;
		if (k == 0)
			l++;
		else if (k == 1)
			r++;
	}
	r *= pwr(2, l);
	cout << r << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}