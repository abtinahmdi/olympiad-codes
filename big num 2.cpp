#include<bits/stdc++.h>
using namespace std;
long long pwr(long long x, long long n)
{
	int i; 
	int number = 1;
    for (i = 0; i < n; ++i)
        number *= x;
    return number;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << pwr(a, b) * pwr(b, a) * (pwr(a, b) - pwr(b, a)) << '\n';
	return 0;
}