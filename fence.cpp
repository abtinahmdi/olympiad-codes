#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 1e5 + 5;
const ll mod = 1e9 + 7;
ll t, n, k, l, r, sum;
void in(){
}
void solve(){
	cin >> n >> k >> l;
	sum = n + k + l;
	sum--;
	cout << sum << '\n';
}
void out(){
}
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		in(), solve(), out();
	}
}

