#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, k;
int main()
{
	cin >> n >> m >> k;
	ll l = 0, r = n * m;
	while(l - r > 0){
		ll mid = (r + l) / 2;
		ll cnt;
		for(int i = 0;i < n;i++){
			cnt += min(mid / i, (ll)m);
		}
		if(cnt >= k){
			r = mid;
		}
		else if(cnt < k){
			l = mid;
		}
	}
	cout << l << '\n';
	return 0;
}