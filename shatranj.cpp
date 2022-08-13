#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int x = abs(1 - a);
	int y = abs(1 - b);
	int z = abs(2 - c);
	int t = abs(2 - d);
	int m = abs(2 - e);
	int n = abs(8 - f);
	cout << x << " " << y << " " << z << " " << t << " " << m << " " << n << endl;
	return 0;
}
