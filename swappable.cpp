#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, ans;
map<ll, ll> m;
int main()
{
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> x;
		ans += m[x]++;
	}
	cout << 1ll * n * (n - 1) / 2 - ans;
}