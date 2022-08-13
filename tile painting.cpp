#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long n, k;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	k = n;
	for(ll i = 2;i * i <= n;i++){
		if(n % i == 0){
			ll x = __gcd(i, n / i);
			k = __gcd(k, x);
		}
	}
	cout << k << '\n';
	return 0;
}