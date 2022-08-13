#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , c , d;
	cin >> a >> b;
	c = a + b;
	if (c % 2 == 0)
		d = a * b;
	else
		d = a / b;
	cout << d << endl;
	return 0;
}