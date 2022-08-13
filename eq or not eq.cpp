#include<bits/stdc++.h>
using namespace std;
string s;
int t, n, e;
void solve()
{
	cin >> s;
	for(int i = 0;i < s.size();i++){
		e = e + s[i] == 'E';
		n = n + s[i] == 'N';
	}
	if(n == 1){
		cout << "NO" << '\n';
		return;
	}
	cout << "YES" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}