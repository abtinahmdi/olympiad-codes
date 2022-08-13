#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, k, res;
long long gusht(ll x, ll n, ll m)
{
	--x;
	for(int i = 1;i <= n;i++){
		res = res + min(m, x / i);
	}
	return res;
}
int main()
{
	cin >> n >> m >> k;
	ll l = 1, r = n * m + 1;
	while(r > l){
		ll mid = (r + l) / 2;
		if(gusht(mid, n, m) < k)
			l = mid + 1;
		else
			r = mid;
	}
	cout << l - 1;
	return 0;
}