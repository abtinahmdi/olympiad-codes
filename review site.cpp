#include <bits/stdc++.h>
using namespace std;
int t, n, k, cnt;
void solve()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> k;
		if (k != 2){
			cnt++;
		}
	}
	cout << cnt << endl;
	cnt = 0;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}