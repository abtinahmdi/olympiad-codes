#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
int n, ans, a[N], dp[N][2];
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		dp[i][0] = dp[i][1] = 1;
		if (a[i] > a[i - 1]) 
			dp[i][0] += dp[i - 1][0], dp[i][1] += dp[i - 1][1];
		if (i > 1 && a[i] > a[i - 2] && dp[i - 2][0] + 1 > dp[i][1]) 
			dp[i][1] = dp[i - 2][0] + 1;
		if (dp[i][1] > ans) 
			ans = dp[i][1];
	}
	cout << ans << '\n';
	return 0;
}