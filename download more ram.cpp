#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
#define pii pair<int, int>
using namespace std;
const int N = 1e3 + 5;
const ll mod = 1e9 + 7;
int t, n, m, k, l, r;
void solve(){
	cin >> n >> k;
	vector<pii> a(n);
	for(int i = 0;i < n;i++)
		cin >> a[i].f;
	for(int i = 0;i < n;i++)
		cin >> a[i].s;
	sort(a.begin(), a.end());
	for(int i = 0;i < n;i++){
		if(a[i].f <= k)
			k += a[i].s;
		else
			break;
	}
	cout << k << '\n';
}
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

