#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll t, n, x, tmp1, tmp2, mx, a[N], b[N];
void solve()
{
	cin >> n >> x;
	tmp1 = 1;
	for(ll i = 0;i < n;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for(ll i = 0;i < n;i++){
		if(b[i] != a[i]){
			tmp2 = n - (i + 1);
			mx = max(tmp2, i);
			if(mx < x)
				tmp1 = 0;
		}
	}
	tmp1 == 0? cout << "NO" << '\n': cout << "YES" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}