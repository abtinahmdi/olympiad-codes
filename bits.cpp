#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 5;
int t, l, r;
long long func(long long x, long long y)
{
	if(x == y - 1)
		return x;
	return 2 * func(x / 2, y / 2);
}
void solve()
{
	int n, k;
	cin >> n >> k;
	cout << func(n, k) << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}