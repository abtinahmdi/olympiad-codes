//Author: ABTIN AHMADI
#include<bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
	cin >> n;
	for (int i = 0 ; i < n ; i ++)
	{
		int a,b;
		cin >> a >> b;
		if (b - a >=2)
		ans++;
	}
	cout << ans << endl;
}