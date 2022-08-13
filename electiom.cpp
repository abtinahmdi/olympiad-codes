#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
string s,ans;
int n,mx;
int main()
{
	cin >> n;
	while(n--){
		cin >> s;
		mp[s]++;
		if(mx < mp[s])
			mx = mp[s], ans = s;
	}
	cout << ans;
}