#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
int t, n, a[N];
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a, a + n);
	n /= 2;
	for(int i = 1;i <= n;i++){
		cout << a[i] << " " << a[0] << '\n';
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}