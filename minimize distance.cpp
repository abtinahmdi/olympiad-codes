#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll t, n, k;
vector<ll> x;
void solve()
{
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> x[i];
	}
	vector<ll> ng, ps;
	for(int i : x){
		if(i >= 0)
			ps.pb(i);
		else
			ng.pb(i);
	}
	sort(ps.begin(), ps.end());
	sort(ng.begin(), ng.end());
	vector<ll> kstops;
	ll p = ps.size();
	ll q = ng.size();
	if(p > 0){
		ll cur = min(k - 1, p - 1);
		while(cur < p){
			kstops.pb(ps[cur]);
			cur += k;
		}
		if(kstops.back() != ps[p - 1]){
			kstops.pb(ps[p - 1]);
		}
	}
	if(q > 0){
		ll cur = min(k - 1, q - 1);
		while(cur < q){
			kstops.pb(-ng[cur]);
			cur += k;
		}
		if(kstops.back() != -ng[q - 1]){
			kstops.pb(-ng[q - 1]);
		}
	}
	ll ans = 0;
	ll z = kstops.size();
	for(int i = 0;i < z - 1;i++){
		ans += kstops[i] * 2LL;
	}
	ans += kstops[z - 1];
	cout << ans << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}