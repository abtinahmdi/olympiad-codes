#include<bits/stdc++.h>
using namespace std;
int a, b;
int pwr(long long x, long long y)
{
	int res = 1;
	for (int i = 0;i < y;i++)
		res *= x;
	return x;
}
int main()
{
	cin >> a >> b;
	cout << pwr(a, b) - pwr(b, a) << '\n';
	return 0;
}