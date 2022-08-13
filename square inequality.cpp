#include<bits/stdc++.h>
using namespace std;
int a, b, c;
const long long mod = 1e9 + 7;
long long pwr(long long a, long long b)
{
	if (!b)
		return 1;
	long long ans = pwr(a, b / 2);
	ans = ans * ans;
	ans = ans % mod;
	if (b % 2)
		ans = ans * a;
	return ans;
}
int main()
{
	cin >> a >> b >> c;
	if (pwr(a, 2) + pwr(b, 2) < pwr(c, 2))
		cout << "Yes" << '\n';
	else if (pwr(a, 2) + pwr(b, 2) >= pwr(c, 2))
		cout << "No" << '\n';
	return 0;
}