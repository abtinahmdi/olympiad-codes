#include<bits/stdc++.h>
using namespace std;
long long a, b, c, x, y;
int main()
{
	cin >> a >> b >> c >> x >> y;
	double sq = sqrt((b - x) * (b - x) + (c - y) * (c - y));
	cout << ceil(sq / (2 * a)) << '\n';
	return 0;
}