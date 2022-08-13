#include<bits/stdc++.h>
#define pb push_back
using namespace std;
const int N = 1e6 + 11;
vector<int> v, dp, mn, mx;
int n, l, r, x, s, asghar;
int main()
{
	cin >> n >> l >> r >> x;
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(int i = 0;i < n;i++){
		asghar = dp.size();
		for(int j = 0;j < asghar;j++){
			dp.pb(v[i] + dp[j]);
			mn.pb(mn[j]);
			mx.pb(v[i]);
		}
		dp.pb(v[i]);
		mn.pb(v[i]);
		mx.pb(v[i]);
	}
	for(int i = 0;i < dp.size();i++){
		if(dp[i] >= l && dp[i] <= r && mx[i] - mn[i] >= x){
			s++;
		}
	}
	cout << s << '\n';
	return 0;
}