#include<bits/stdc++.h>
using namespace std;
long long t, n, k, l, r;
void solve()
{
	cin >> n >> k >> l >> r;
	cout << (l - n) * (r - k) + 1 << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}