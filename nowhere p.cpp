#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll power(ll a, ll b)
{
	if (b==0)
		return 1;
	if (b==1) 
		return a;
	ll tmp = power(a, b / 2);
	tmp = tmp * tmp % mod;
	if (b % 2) 
		return tmp * a % mod;
	return tmp;
}

int main() 
{
	ll n, p;
	cin >> n >> p;
	cout << (p - 1) * power(p - 2, n - 1) % mod;
	return 0;
}
