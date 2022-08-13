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
	cin >> n >> m >> k;
	cout << ((k - m) % 2 == 0 ? "Alice" : "Borys") << '\n';
}
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}

