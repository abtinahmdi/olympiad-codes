#include<bits/stdc++.h>
using namespace std;
int t;
string s;
void solve()
{
	cin >> s;
	if(s.size() % 2 != 0){
		cout << "NO" << '\n';
		return;
	}
	string s1 = s.substr(0, (s.size() / 2));
	string s2 = s.substr(s.size() / 2, s.size() - 1);
	if(s1 == s2){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}