#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll t;
void solve()
{
    cin >> s;
    if(s[0] == s[s.size() - 1])
    	cout << s << '\n';
    else{
    	s[0] = s[s.size() - 1];
    	cout << s << '\n';
    }
}
int main()
{
    cin>>t;
    while(t--){
        solve();
    }
}