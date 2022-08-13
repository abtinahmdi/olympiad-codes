#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
	if(n == 0)
		return 1;
    if (n > 0)
		return n * fact(n - 1);
}
long long c(long long n, long long r)
{
	if(n == r) 
		return 1;
    if (r == 0 && n != 0) 
		return 1;
    else 
		return (n * fact(n - 1)) / fact(n - 1) * fact(n - r);
}
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	cout << c(n, k) * m << endl;
	return 0;
}