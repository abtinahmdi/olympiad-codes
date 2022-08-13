#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, k, ans;
void solve()
{
	cin >> n >> k;
	if(n == 1 && k == 1)
		cout << "0" << '\n';
	else if(n == 1 || k == 1)
		cout << "1" << '\n';
	else
		cout << "2" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}