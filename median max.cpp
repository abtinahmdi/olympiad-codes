#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a;
ll b;
void solve()
{
	cin >> a >> b;
	ll n = a / 2 + 1;
	cout << b / n << endl;
}
int main()
{
	int k;
	cin >> k;
	for (int i = 0;i < k;i++){
		solve();
	}
	return 0;
}