#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, n, H, a[N];
void solve()
{
	cin >> n >> H;
	for(int i = 0;i < n;++i)
		cin >> a[i];
	sort(a, a + n);
	cout << (H / (a[n - 1] + a[n - 2]) * 2)+(H % (a[n - 1] + a[n - 2]) > 0)+(H % (a[n - 1]+a[n - 2]) > a[n - 1]) << '\n';
}
int main()
{
	cin >> t;
	for(int i = 0;i < t;i++)
		solve();
}