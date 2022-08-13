#include<bits/stdc++.h>
using namespace std;
int t, n, k, ans, bo, ku;
void solve()
{
	cin >> n >> k;
	bo = max(n, k);
	ku = min(n, k);
	ans = (bo - ku) / 2;
	ans = min(ans, ku);
	ans = ans + (ku - ans) / 2;
	cout << ans << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}