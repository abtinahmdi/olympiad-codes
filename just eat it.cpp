#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t;
const ll N = 1e5 + 5;
ll a[N];
ll n;
void solver()
{
	cin >> n;
	ll ans = 0;
	ll cnt = 0;
	ll l = 0;
	ll r = 0;
	for (ll i = 0; i < n; i++){
		cin >> a[i];
		ans += a[i];
	}
	ll maxi = a[0];
	for (ll i = 0; i < n - 1; i++){
		if (cnt + a[i] > 0){
			cnt += a[i];
			maxi = max(maxi, cnt);
		}
		else
			cnt = 0;
	}
	cnt = 0;
	for (ll i = n - 1; i >= 1; i--){
		if (cnt + a[i] > 0){
			cnt += a[i];
			maxi = max(maxi, cnt);
		}
	}
	if (maxi >= ans)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}
int main()
{
	cin >> t;
	for (ll i = 0; i < t; i++){
		solver();
	}
}