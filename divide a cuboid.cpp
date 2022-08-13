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
	if(n % 2 == 0 || m % 2 == 0 || k % 2 == 0){
		cout << 0 << '\n';
		return;
	}
	cout << min(n * m, min(m * k, n * k)) << '\n';
}
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}

