#include<bits/stdc++.h>
#definr ll long long
using namespace std;
ll t, n, k, ans;
void solve()
{
	cin >> n >> k;
	if(x == 1 && y == 1)
		cout << "0" << '\n';
	else if(x == 1 || y == 1)
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