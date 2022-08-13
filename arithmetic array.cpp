#include<bits/stdc++.h>
using namespace std;
long long t, n, k, l;
void solve()
{
	cin >> n >> k >> l;
	l = l / k;
	if(n <= l){
		cout << n * (n - 1) / 2 << '\n';
		return;
	}
	else
		cout << (n - l) * l + l * (l - 1) / 2 << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}