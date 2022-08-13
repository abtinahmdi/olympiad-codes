#include<bits/stdc++.h>
using namespace std;
int t, n;
void solve()
{
	cin >> n;
	cout << (n / 2) + (n % 2) << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}