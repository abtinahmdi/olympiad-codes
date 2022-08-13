#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin >> n;
	if (n < 10)
		cout << 0 << 0 << 0 << n;
	else if (n < 100 && n > 10)
		cout << 0 << 0 << n;
	else if (n < 1000 && n > 100)
		cout << 0 << n;
	else
		cout << n;
}