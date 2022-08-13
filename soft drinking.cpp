#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int ovml = k * l;
	int tsml = ovml / nl;
	int ovsl = c * d;
	int tssa = p / np;
	int x = min(min(tsml, ovsl), tssa) / n;
	cout << x;
}