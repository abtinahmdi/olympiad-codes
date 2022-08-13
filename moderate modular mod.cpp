#include<bits/stdc++.h>
using namespace std;
int t, n, k;
void solve()
{
	cin >> n >> k;
	if(n > k)
		cout << n + k << '\n';
	else
		cout << k - (k % n) / 2 << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}