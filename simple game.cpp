//abtin ahmadi
#include<bits/stdc++.h>
using namespace std;
int n, m, a;
int main()
{
	cin >> n >> m;
	if(n - m >= m )
		a = m + 1;
	else 
		a = m - 1;
	if(n == 1)
		cout << "1";
	else
		cout << a;
	return 0;
}
