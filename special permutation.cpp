#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, sto, p[105];
void solve()
{
	cin >> n;
	int j = 1;
	if (n % 2 == 0){
		for(int i = n;i > 0;i--){
			cout << i << " ";
		}
		cout << '\n';
	}
	else {
		cout << n << " ";
		for (int i = 1; i < n; i++) {
			cout << i << " ";
		}
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}