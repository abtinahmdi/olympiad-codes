#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2 * 1e5 + 10;
ll n, ans, a[N], b[N];
ll fun(ll n)
{
	return (b[n] == n)? n: (b[n] == fun(b[n]));
}
void solve()
{
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		b[a[i]] = a[i];
	}
	for(int i = 0;i < n / 2;i++){
		if(a[i] != a[n - i + 1]){
			if(fun(a[i]) != fun(a[n - i + 1])){
				b[fun(a[i])] = fun(a[n - i + 1]);
				ans++;
			}
		}
	}
	cout << ans << '\n';
}
int main()
{
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}