#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, z, a, b;
	double n;
	cout << fixed << setprecision(7);
	cin >> x;
	while (x--){
		cin >> y;
		z = y, n = 0, b = -1000000000;
		while (z--){
			cin >> a;
			b = max(b, a), n += a;
		}
		n = (n - b) / (y - 1) + b;
		cout << n << endl;
	}
    return 0;
}
