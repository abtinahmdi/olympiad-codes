#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a, b;
ll pwr(ll x, ll y)
{
	int res = 1;
	for (int i = 0;i < y;i++)
		res *= x;
	return res;
}
int main()
{
	cin >> a >> b;
	cout << pwr(a, b) * pwr(b, a) * (pwr(a, b) - pwr(b, a)) << '\n';
	return 0;
}