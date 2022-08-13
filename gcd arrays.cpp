#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 1e5 + 5;
const ll mod = 1e9 + 7;
int t, n, m, k, l, r;
void solve(){
	cin >> l >> r >> k;
	ll sz = r - l + 1;
	ll st = (r / 2) - (l - 1) / 2;
//	cout << sz << " " << st << '\n';
	if(st == 0 && l != 1 && r != 1)
		st = 1;
	if(sz - st > k)
		cout << "NO" << '\n';
	else
		cout << "YES" << '\n';
}
int main(){
	cin >> t;
	while(t--){
		solve();
	}
}

