#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int n, k, l, cnt;
int dp[N];
int main()
{
	cin >> n >> k;
	dp[0] = 1;
	for(int i = 1;i <= 1e4;i++)
		if(i * (i + 1) / 2 <= n + k)
			l = i;
	for(int i = 1;i <= l;i++){
		int sum = i * (i + 1) / 2;
		for(int j = k;j >= i;j--)
			if(sum - j <= n)
				dp[j] = (dp[j] + dp[j - i]) % mod;
	}
	for(int i = 0;i <= k;i++)
		if(l * (l + 1) / 2 - i <= n)
			cnt = (cnt + dp[i]) % mod;
	cout << cnt;
}