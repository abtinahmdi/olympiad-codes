#include <bits/stdc++.h>
using namespace std;
string s, ans;
map <char, int> cnt;
int n;
int main() 
{
    cin >> s;
    map <char, int> cnt;
    for(char c : s){
        cnt[c]++;
    }
    n = s.size();
    for(int i = 0;i < n;i++){
        bool ok = true;
        for(char x = 'z';x > s[i];x--) {
            if(cnt[x]){
                ok = false;
                break;
            }
        }
        if(ok)
			ans += s[i];
        cnt[s[i]]--;
    }
    cout << ans << '\n';
    return 0;
}