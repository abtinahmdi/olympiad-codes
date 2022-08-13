#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e2;
ll dp[N][2][2];
ll a;
int main()
{
	cin >> a;
	if (a == 1)
		cout << 2 << '\n';
	if (a == 2)
		cout << 4 << '\n';
	else {
		dp[1][0][0] = 2;
		dp[1][0][1] = 1;
		dp[1][1][0] = 1;
		dp[1][1][1] = 0;
		for (int i = 2;i <= a - 2;i++){
			dp[i][0][0] = dp[i - 1][0][0] + dp[i - 1][1][0];
			dp[i][0][1] = dp[i - 1][0][0];
			dp[i][1][0] = dp[i - 1][0][1];
			dp[i][1][1] = 0;
		}
		cout << dp[a - 2][0][0] + dp[a - 2][0][1] + dp[a - 2][1][0] << '\n';
	}
	return 0;
}