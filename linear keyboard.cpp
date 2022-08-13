#include <bits/stdc++.h>
using namespace std;
string alp, s;
int t, ans;
map<char,int> m;
void solve() 
{
    cin >> alp;
    cin >> s;
    for(int i = 0 ; i < alp.size() ; i++) {
    	m[alp[i]] = i;
    }
    for(int i = 0 ; i < (int)s.size()-1 ; i++) {
        ans += abs(m[s[i]] - m[s[i + 1]]);
    }
    cout << ans << '\n';
    ans = 0;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}