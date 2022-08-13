#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans;
string s;
char p;
int main()
{
    p = 'a';
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        ans += min(abs(p - s[i]), 26 - abs(p - s[i]));
        p = s[i];
    }
    cout << ans;
}