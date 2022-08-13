#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, k, cmp, tmp1, tmp2;
string s;
void solve()
{
	cin >> n >> k >> s;
	cmp = 1;
	for(int i = 0;i < n;i++){
		if(s[i] != '?' && s[i % k] != '?' && s[i] != s[i % k])
			cmp = 0;
		if(s[i] != '?')
			s[i % k] = s[i];
	}
	for(int i = 0;i < k;i++){
		tmp1 += (s[i] == '0');
		tmp2 += (s[i] == '1');
	}
	if (cmp && tmp1 <= k / 2 && tmp2 <= k / 2)
		cout << "YES" << '\n';
	else 
		cout << "NO" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}