#include<bits/stdc++.h>
using namespace std;
int t;
string s;
void solve()
{
	cin >> s;
	if(s.size() <= 10)
		cout << s << '\n';
	else
		cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}
