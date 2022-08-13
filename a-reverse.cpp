#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int l, r;
string s;
int main()
{
	cin >> l >> r;
	l--, r--;
	cin >> s;
	string tmp = "";
	for(int i = r;i >= l;i--)
		tmp += s[i];
	string ans = "";
	for(int i = 0;i < l;i++)
		ans += s[i];
	ans += tmp;
	for(int i = r + 1;i < s.size();i++)
		ans += s[i];
	cout << ans << '\n';
}
