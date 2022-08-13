#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
	cin >> n;
	cin >> s;
	if (s[n - 1] == 'x')
		cout << "No" << endl;
	else if (s[n - 1] == 'o')
		cout << "Yes" << endl;
	return 0;
}