#include<bits/stdc++.h>
using namespace std;
int t, n, k;
void solve()
{
	cin >> n >> k;
	int s = n + k;
	if(s % 2 != 0)
		cout << "-1 -1" << '\n';
	else
		cout << n / 2 << " " << (k + 1) / 2 << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}