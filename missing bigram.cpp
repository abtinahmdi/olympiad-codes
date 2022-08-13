#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
string s, bi[105];
ll t, s1, s2, s3, tmp;
string str;
void solve()
{
	cin >> s1;
	vector<string> s;
	for(int i = 0;i < s1 - 2;i++){
		cin >> str;
		s.pb(str);
	}
	string c = "";
	c += s[0];
	for(int i = 1;i < s1 - 2;i++){
		if(c[(c.size()) - 1] != s[i][0]){
			c += s[i];
			tmp = 0;
		}
		else{
			c += s[i][1];
		}
	}
	if(c.size() != s1){
		if(c[0] == 'a'){
			while(c.size() < s1){
				c += "b";
			}
		}
		else{
			while(c.size() < s1){
				c += "a";
			}
		}
	}
	cout << c << '\n';
	return;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}