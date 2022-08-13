#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,ans=0;
int main()
{
	cin >> a >> b >> c >> d;
	if(a == b||a == c||a == d)
		ans++;
	if(b == c||b == d)
		ans++;
	if(c == d)
		ans++;
	cout << ans << endl;
}