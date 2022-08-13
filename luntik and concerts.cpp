#include<bits/stdc++.h>
using namespace std;
int t, a, b, c;
void solve()
{
	cin >> a >> b >> c;
	a *= 1;
	b *= 2;
	c *= 3;
	if ((a + b + c) % 2 == 0)
		cout << 0 << '\n';
	else
		cout << 1 << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}