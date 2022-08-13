#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int mx = 0, ans = 0;
		for (int prv = -1e9; n--; ) {
			int x;
			cin >> x;
			mx = max(mx, prv - x);
			prv = max(x, prv);
		}
		for (long long x = 1; mx > 0; x <<= 1)
			ans++, mx -= x;
		cout << ans << endl;
	}
	return 0;
}