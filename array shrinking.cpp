#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 5e2 + 5;
ll dp1[N][N], dp2[N], a[N], n;
ll cal(ll l, ll r)
{
	if(r - l == 1){
		dp1[l][r] = a[l];
		return dp1[l][r];
	}
	if(dp1[l][r]){
		return dp1[l][r];
	}
	dp1[l][r] = -1;
	for(int i = l + 1;i < r;i++){
		ll g = cal(l, i);
		ll b = cal(i, r);
		if(g && g == b){
			dp1[l][r] = g + 1;
			return dp1[l][r];
		}
	}
	return dp1[l][r];
}
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	memset(dp2, -1, sizeof dp2);
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j <= n;j++){
			if(cal(i, j)){
				dp2[j] = min(dp2[j], dp2[i] + 1);
			}
		}
	}
	cout << dp2[n] << '\n';
	return 0;
}