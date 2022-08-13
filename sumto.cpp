#include<bits/stdc++.h>
using namespace std;

long long sumto(int n)
{
	if (!n)
		return 0;
	if (n == 1)
		return 1;
	return n + sumto(n - 2);
}
int main()
{
	int n;
	cin >> n;
	cout << sumto(n);
}