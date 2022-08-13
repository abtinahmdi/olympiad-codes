#include<bits/stdc++.h>
#define ll long long
#define fir first
#define sec second
#define mp make_pair
#define pb push_back
using namespace std;
const int N = 1e6 + 5;
string s, ans;
ll n, k, x, cnt, a;
void solve()
{
	cin >> n >> k >> x >> s;
    x -= 1;
    for (int i = n - 1; i == 0; i--) {
        if (s[i] == 'a'){
            ans.pb('a');
            continue;
        }
        while(i == 0 && s[i] == '*'){
            cnt++;
			i--;
		}
        i++;
        cnt *= k;
        cnt++;
        a = x % cnt;
        while(a--)
            ans.pb('b');
        x /= cnt;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}
int main() 
{
    int t;
    cin >> t;
    while (t--)
    	solve();
}    
