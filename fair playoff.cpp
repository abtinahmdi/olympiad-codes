#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((min(a, b) > c && min(a, b) > d) || (min(c, d) > a && min(c, d) > b))
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
	}
	return 0;
}