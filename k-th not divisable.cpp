#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, a, b, ans, x, y;
	cin >> n;
	for(int i = 0 ; i < n ; i ++){
		cin >> a >> b;
		x = a - 1;
		y = b - 1;
		ans = b + (y / x);
		cout << ans << endl;
	}
}