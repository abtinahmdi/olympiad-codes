#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char c[N];
int dp[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> c[i];
		if (c[i] == 'T')
			dp[i] = 0;
		if (c[i] == 'B')
			dp[i] = 1;
		if (c[i] == '.')
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		if (c[i] == 'K'){
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			cout << dp[i] << '\n';
			break;
		}
	}
	return 0;
}