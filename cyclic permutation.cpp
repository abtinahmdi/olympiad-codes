#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, mod=1e9+7, a = 1, b = 1;
int main()
{
	cin >> n;
	for(ll i = 2;i <= n;i++){
		a = (a * i) % mod;
		b = (b * 2) % mod;
	}
	cout << (a + mod - b) % mod;
}