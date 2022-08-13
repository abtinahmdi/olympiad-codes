#include<bits/stdc++.h>
using namespace std;
int t, n;
void solve()
{
	cin >> n;
	if (n % 4 == 0)
		cout << "YES" << '\n';
	else 
		cout << "NO" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}