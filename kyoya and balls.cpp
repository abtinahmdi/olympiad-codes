#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int N = 1e3 + 5;
long long c, k, f, sum;
long long dp[N][N];
int main()
{
    dp[0][0] = 1;
    for (int i = 1; i < N; i++)
    {
        dp[i][0] = 1;
        for (int j = 1; j < N; j++)
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
    }
    cin >> k;
    f = 1;
    for (int i = 0; i < k; i++)
    {
        cin >> c;
        f = (f * dp[sum + c - 1][c - 1]) % mod;
        sum += c;
    }
    cout << f << endl;
    return 0;
}
