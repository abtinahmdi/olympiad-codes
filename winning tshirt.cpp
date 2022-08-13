#include<bits/stdc++.h>
using namespace std;
int n, k, a, b;
int main()
{
	cin >> n >> k;
	cin >> a >> b;
	if(n >= a && k >= b)
		cout << "yes" << '\n';
	else
		cout << "no" << '\n';
	return 0;
}