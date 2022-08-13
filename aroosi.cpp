#include<bits/stdc++.h>
using namespace std;
const int N = 43;
int dp[N][N][N*N], L[N], C[N];
int main()
{
    int n, k;
    cin >> n >> k;
    k = min(k, 40 * 40);
    for( int i = 1; i <= n; i++ )
        cin >> C[i];
    for( int i = 1; i <= n; i++ )
    	cin >> L[i];
    for(int i = 1;i <= n;i++){
        for(int l = 0;l <= 40;l++){
            for(int s = 0;s <= k;s++){
                int best = 0;
                for(int j = 0;j <= L[i];j++){
                    if(l + j > 40 or s < j * C[i])
                        break;
                    int val = dp[i - 1][l + j][s - j * C[i]] + min(l + j, L[i]) * C[i];
                    best = max(best, val);
                }
                dp[i][l][s] = best;
            }
        }
    }
    cout << dp[n][0][k];
}