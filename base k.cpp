#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long k, a, b;
	cin >> k >> a >> b;
	long long x = 1;
	long long f = 0, s = 0;
	while (a) {
		f += a % 10 * x;
		a /= 10;
		x *= k;
	}
	x = 1;
	while (b) {
		s += b % 10 * x;
		b /= 10;
		x *= k;
	}
	cout << f * s << '\n';
}