#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 1e2 + 5;
const ll mod = 1e9 + 7;
int t, n, sum, L[N];
void solve(){
	cin >> n;
	for(int i = 0;i < 2 * n;i++){
		cin >> L[i];
	}
	sort(L, L + 2 * n);
	for(int i = 0;i < 2 * n;i += 2){
		sum += L[i];
	}
	cout << sum << '\n';
}
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}

