#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e4 + 8;
ll t, n, l, r, c;
ll por(ll x){
	cout << "? " << x << '\n';
	ll y; cin >> y;
	return y;
}
void solve(){
	cin >> n;
	vector<bool> mark(n + 1, 0);
	vector<ll> perm(n + 1);
	ll tx = 1;
	while(tx <= n){
		ll x = por(tx);
		while(!mark[x]){
			ll y = por(tx);
			perm[x] = y;
			mark[x] = true;
			x = y;
		}
		tx++;
	}
	cout << "! ";
	for(int i = 1;i <= n;i++){
		cout << perm[i] << " ";
	}
	cout << '\n';
}
int main(){
	cin >> t;
	while(t--){
		solve();

	}
}
