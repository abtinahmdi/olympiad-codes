#include<bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
	cin >> n >> m;
	if (n == m && n * m % 2 != 0)
		cout << "Akshat" << endl;
	else if(n == m && n * m % 2 == 0)
		cout << "Malvika"<< endl;
	if (n < m && n % 2 != 0 || m < n && m % 2 != 0)
		cout << "Akshat"<< endl;
	if( n < m && n % 2 == 0 || m < n && m % 2 == 0)
		cout << "Malvika"<< endl;
	return 0;
}