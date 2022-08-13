#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define f first
#define s second
#define pb push_back
using namespace std;
const ll inf = 1e17;
const int N = 2e5 + 5;
ll n, a[N], par[N][2], dp[N][2], ans[N];
void solve(){
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
	dp[0][0] = inf;
    dp[0][1] = -inf;
    for (int i = 1; i < n; i++) {
        dp[i][0] = -inf;
        dp[i][1] = inf;
        if (dp[i - 1][0] > a[i]) {
            if (dp[i][1] > a[i - 1]) {
                dp[i][1] = a[i - 1];
                par[i][1] = 0;
            }
        }
        if (a[i] < a[i - 1]) {
            if (dp[i][1] > dp[i - 1][1]) {
                dp[i][1] = dp[i - 1][1];
                par[i][1] = 1;
            }
        }
        if (dp[i - 1][1] < a[i]) {
            if (dp[i][0] < a[i - 1]) {
                dp[i][0] = a[i - 1];
                par[i][0] = 1;
            }
        }
        if (a[i] > a[i - 1]) {
            if (dp[i][0] < dp[i - 1][0]) {
                dp[i][0] = dp[i - 1][0];
                par[i][0] = 0;
            }
        }
    }
	if (dp[n - 1][0] == -inf && dp[n - 1][1] == inf) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    int x;
    if (dp[n - 1][0] != -inf)
        x = 0;
    else
        x = 1;
    for (int i = n - 1; i > -1; i--) {
        if (x == 0)
            ans[i] = 1;
        x = par[i][x];
    }
    for (int i = 0; i < n; i++)
        cout << !ans[i] << " ";
	cout << '\n';
}        
int main() {
	std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}

