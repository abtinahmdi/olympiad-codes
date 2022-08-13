//100000101101110010101
#include<bits/stdc++.h>
using namespace std;
int t, a, b, c, n, d, e;
int main()
{
	cin >> t;
	for (int i = 0;i < t;i++){
		cin >> a >> b >> c >> n;
		d = a + b + c + n;
		e = d / 3;
		if(d % 3 == 0 && (abs(a - e) + abs(b - e) + abs(c - e)) == n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}