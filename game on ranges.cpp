#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;
const int N = 1e3 + 5;
ll t, n;
map<pair<ll, ll>, bool> mp;
pair<ll, ll> a[N];
map<pair<ll, ll>, ll> ans;
void solve(ll x, ll y)
{
	if(x == y){
		ans[{x, y}] = x;
		return;
	}
	for(int i = x;i <= y;i++){
		if(i == x){
			if(mp[{i + 1, y}]){
				ans[{x, y}] = i;
				solve(i + 1, y);
				break;
			}
		}
		else if(i == y){
			if(mp[{x, i - 1}]){
				ans[{x, y}] = i;
				solve(x, i - 1);
				break;
			}
		}
		else{
			if(mp[{x, i - 1}] && mp[{i + 1, y}]){
				ans[{x, y}] = i;
				solve(x, i - 1);
				solve(i + 1, y);
				break;
			}
		}
	}
}
void fin()
{
	cin >> n;
	mp.clear();
	ans.clear();
	ll x = 1, y = n;
	for(int i = 0;i < n;i++){
		cin >> a[i].f >> a[i].s;
		mp[{a[i].f, a[i].s}] = true;
	}
	solve(x, y);
	for(auto i: mp){
		if(ans[i.f]){
			cout << i.f.f << " " << i.f.s << " " << ans[i.f] << '\n';
		}
		cout << '\n';
	}
}
int main()
{
	cin >> t;
	while(t--){
		fin();
	}
}