#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 6e3 + 123;
ll t, dp[N][N];
string s;
ll fmi(string &s)
{
    for(int i = 0;i < s.length();i++)
        dp[i][i] = 0;
    for(int i = 2;i <= s.length();i++) {
        for(int j = 0;j < s.length() - i + 1;j++) {
            ll e = j + i - 1;
            if(s[e] == s[j] && i == 2)
                dp[j][e] = 0;
            else if(s[e] == s[j])
                dp[j][e] = dp[j + 1][e - 1];
            else
                dp[j][e] = 1 + min(dp[j + 1][e], dp[j][e - 1]);
        }
    }
    return dp[0][s.length() - 1];
}
void solve() 
{
	cin >> s;
    for(int i = 0;i < s.length() + 1;i++)
        for(int j = 0;j < s.length() + 1;j++)
            dp[i][j] = INT_MAX;
    cout << fmi(s) << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
