#include <bits/stdc++.h>
using namespace std;
int main()
{
	double tmp;
	double x, y, z;
	cin >> x >> y >> z;
	tmp = y / x;
	tmp = tmp * z;
	int k = (int)tmp;
	if (k == tmp)
		cout << k - 1;
	else
		cout << k;	
}