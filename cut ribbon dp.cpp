#include<bits/stdc++.h>
using namespace std;
const int N = 4e3 + 5;
int dp[N];
int n , a , b , c;
int main()
{
	cin >> n >> a >> b >> c;
	dp[a] = 1;
	dp[b] = 1;
	dp[c] = 1;
	dp[0] = 0;
	for (int i = 1;i <= n;i++){
		int ans = dp[i];
		if (i >= a && dp[i - a] != 0)
			ans = max(ans, dp[i - a] + 1);
		if (i >= b && dp[i - b] != 0)
			ans = max(ans, dp[i - b] + 1);
		if (i >= c && dp[i - c] != 0)
			ans = max(ans, dp[i - c] + 1);
			dp[i] = ans;
	}
	cout << dp[n] << endl;
	return 0;
}