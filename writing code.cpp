#include<bits/stdc++.h>
using namespace std;
const int N = 5e2 + 5;
int n, l, b, x, dp[N][N];
long long mod;
int main()
{
    cin >> n >> l >> b >> mod;
    for(int i = 0;i < N;i++){
        dp[0][i] = 1;
    }
    for(int i = 0;i < n;i++){
        cin >> x;
        for(int j = 1;j < N;j++){
            for(int k = x;k < N;k++){
                dp[j][k] += dp[j - 1][k - x];
                dp[j][k] %= mod;
            }
        }
    }
    cout << dp[l][b];
}
