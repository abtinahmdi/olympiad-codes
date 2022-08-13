#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, y;
int main()
{
	std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);	
	cin >> n;
	for(int i = 0; i < n; i ++){
		ll a, b;
		cin >> a >> b;
		x += a;
		y += b;
	}
	for(int i = 0; i < n; i ++){
		ll c, d;
		cin >> c >> d;
		x += c;
		y += d;
	}
	cout << x / n << " " << y / n << '\n';
	return 0;
}