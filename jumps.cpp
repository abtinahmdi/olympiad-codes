#include<bits/stdc++.h>
using namespace std;
int t, n, k = 1;
void solve()
{
	cin >> n;
	while (k * (k + 1) / 2 < n)
		k++;
	if (k * (k + 1) / 2 - 1 == n)
		cout << k + 1 << endl;
	else
		cout << k << endl;
	k = 0;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}