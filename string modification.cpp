#include<bits/stdc++.h>
using namespace std;
string s, send, c;
int t, n, k;
string mod(string s, int x, int y)
{
	string pre = s.substr(y - 1, x - y + 1);
	string suf = s.substr(0, y - 1);
	if(x % 2 == y % 2)
		reverse(suf.begin(), suf.end());
	return pre + suf;
}
void solve()
{
	cin >> n;
	cin >> s;
	send = mod(s, n, 1);
	k = 1;	
	for(int i = 2;i <= n;i++){
		c = mod(s, n, i);
		if(send > c){
			send = c;
			k = i;
		}
	}
	cout << send << '\n' << k << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}