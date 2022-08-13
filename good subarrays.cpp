#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, ans, j;
string s;
int c(char s)
{
	return (int)(s - '1');
}
void solve()
{
    map<ll,ll> m;
    m[0]++;
    cin >> n;
    cin >> s;
    for(int i = 0;i < n;i++){
    	j += c(s[i]);
    	ans += m[j];
    	m[j]++;
    }
    cout << ans << endl;
    ans = 0;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}