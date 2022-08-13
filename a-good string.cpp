#include <bits/stdc++.h>
using namespace std;
int dp(string a,char x)
{
	if(a.length()==1){
		if(a[0]==x){
			return 0;
		}
		return 1;
	}
	string l{a.substr(0,a.length()/2)}, r{a.substr(a.length()/2)};
	return min(dp(l, char(x + 1)) + r.length() - count(r.begin(), r.end(), x), dp(r, char(x + 1)) + l.length() - count(l.begin(), l.end(), x));
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		string s;
		cin >> s;
		cout << dp(s,'a') << '\n';
	}
	return 0;
}