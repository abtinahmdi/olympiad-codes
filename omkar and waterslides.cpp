#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 5;
ll a[N];
ll dp[N];
void solve()
{
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}
	dp[0] = 0;
	for (ll i = 1; i < n; i++){
		dp[i] = dp[i - 1];
		if (a[i] < a[i - 1]){
			dp[i] += (a[i - 1] - a[i]);
		}
	}
	cout << dp[n - 1] << endl;
}
int main ()
{
	ll t;
	cin >> t;
	while (t--){
		solve();
	}
}