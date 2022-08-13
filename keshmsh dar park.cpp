#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, m;
long long mx, b[N][N], dp[N][N];
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	    for(int j = 0; j < m; j++)
            cin >> b[i][j];
    memset(dp, 0, sizeof(long long) * n * m);
    for(int i = n - 1; i >= 0; i -= 2){
        for(int j = m - 1; j >= 0; j--){
            if(b[i][j] == 0)
                continue;
            if(i == n - 1)
                dp[i][j] = b[i][j];
            int down;
            if(((n - 1) / 2 - i / 2) % 2 == 0)
                down = j - 1;
            else
                down = j + 1;
            if(i < n - 1 && down >= 0 && down <= m - 1 && dp[i + 2][down] != 0)
                dp[i][j] = max(dp[i][j], b[i][j] + dp[i + 2][down]);
            if(j < m - 1 && dp[i][j + 1] != 0)
                dp[i][j] = max(dp[i][j], b[i][j] + dp[i][j+1]);
        }
    }
    for(int i = 0; i < m; i++)
        mx = max(mx, dp[0][i]);
    cout << mx << endl;
    return 0;
}