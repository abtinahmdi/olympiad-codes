#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const long long mod = 1e9 + 7;
int n, a, b, k, cur, partialS[N], dp[N];
int main()
{
    cin >> n >> a >> b >> k;
    for(int i = 0;i <= n;i++){
        dp[i] = 1;
    }
    a--;
    dp[b - 1]--;
    for(int i = 0;i < k;i++){
        for(int i = 0;i < n;i++){
            partialS[i + 1] = (partialS[i] + dp[i]) % mod;
        }
        for(int i = 0;i < n;i++){
            cur = abs(b - i);
            dp[i] = ((partialS[min(n, i + cur)] - partialS[max(1 - cur + i, 0)] + mod)% mod - dp[i] + mod) % mod;
        }
    }
    cout << dp[a] << endl;
}
