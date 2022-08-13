#include<bits/stdc++.h>
using namespace std;
int t, n, k, m;
string s, c;
void solve()
{
	cin >> s >> c;
	n = c.size() - 1;
	for(int i = s.size() - 1;i >= 0;i = i - 2){
		if(n >= 0 && s[i] == c[n]){
			++i;
			--n;
		}
	}
	if(n == -1)
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
}