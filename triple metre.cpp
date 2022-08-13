#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, sum;
string s, ans, t = "oxxoxxoxxoxxoxxoxx";
void solve() 
{
    string s;
    cin >> s;
    ans = "Yes";
    if(s.size() == 1) {
        if(s[0] != 'o' && s[0] != 'x')
        ans = "No";
        cout << ans << "\n";
        return;
    }
    ll st = 0;
    if(s[0] == 'x'){
        if(s[1] == 'o')
        	st = 2;
        else
        	st = 1;
    }
    for(ll i = 0;i < s.size();i++) {
        if(s[i] != t[st + i]) {
            ans = "No";
            break;
        }
    }
    cout<<ans<<"\n";
}
int main()
{
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}