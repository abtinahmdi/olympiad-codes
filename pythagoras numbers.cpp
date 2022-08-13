#include<bits/stdc++.h>
using namespace std;
int a, b, c;
long long pwr(int x, int n)
{
    int number = 1;
    for (int i = 0; i < n; ++i)
        number *= x;
    return number;
}
int main()
{
	cin >> a >> b >> c;
	if(pwr(a, 2) + pwr(b, 2) == pwr(c, 2) || pwr(b, 2) + pwr(c, 2) == pwr(a, 2) || pwr(a, 2) + pwr(c, 2) == pwr(b, 2))
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}