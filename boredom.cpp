#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long tmp[N];
long long dp[N];
long long a[N];
int main()
{
	long long n;
	cin >> n;
	long long maxx = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i ++)
	{
		tmp[a[i]]++;
		maxx = max(maxx, a[i]);
	}
	dp[1] = tmp[1];
	dp[2] = max(tmp[2] * 2, tmp[1]);
	for(int i = 3; i <= maxx; i ++)
	{
		dp[i] = max(dp[i - 2] + (tmp[i] * i), dp[i - 1]);
	}
	cout << dp[maxx];
}
