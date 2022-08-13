#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll t, n, ind;
ll a[N], dp[N];
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	if(!(n % 2)){
		dp[0] = -(abs(a[2]) * (a[0] / (abs(a[0]))));
		dp[1] = -(abs(a[2]) * (a[1] / (abs(a[1]))));
		dp[2] = -(abs(a[2]) * (a[2] / (abs(a[2]))));
	}
	ind = 3;
	for(int i = 3;i < n;i += 2){
		dp[i] = a[i + 1];
		dp[i + 1] = -(a[i]);
	}
	for(int i = 0;i < n;i++){
		cout << dp[i] << '\n';
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}