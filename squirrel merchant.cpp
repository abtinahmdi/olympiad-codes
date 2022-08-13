#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e3 + 5;
const int NN = 5e3 * 5e3;
ll dp[N * N], g[5], s[5], b[5], maxx;
int main()
{
    int n;
    long long ga, gb, sa, sb, ba, bb;
    cin >> n;
    cin >> g[0] >> s[0] >> b[0];
    cin >> g[1] >> s[1] >> b[1];
    dp[0] = n;
    maxx = dp[0];
    for (int i = 1; i <= n; i++)
    {
        if (g[0] <= i)
            dp[i] = max(dp[i], dp[i - g[0]] + (g[1] - g[0]));
        if (s[0] <= i)
            dp[i] = max(dp[i], dp[i - s[0]] + (s[1] - s[0]));
        if (b[0] <= i)
            dp[i] = max(dp[i], dp[i - b[0]] + (b[1] - b[0]));
        maxx = max(dp[i], maxx);
    }
    memset(dp, 0, sizeof dp);
    dp[0] = maxx;
    long long nmx = maxx;
    for (int i = 1; i <= nmx; i++)
    {
        if (g[1] <= i)
            dp[i] = max(dp[i], dp[i - g[1]] + (g[0] - g[1]));
        if (s[1] <= i)
            dp[i] = max(dp[i], dp[i - s[1]] + (s[0] - s[1]));
        if (b[1] <= i)
            dp[i] = max(dp[i], dp[i - b[1]] + (b[0] - b[1]));
        maxx = max(dp[i], maxx);
    }
    cout << maxx;
    return 0;
}
