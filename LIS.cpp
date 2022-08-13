#include<bits/stdc++.h>
using namespace std;
const int N = 4e3 + 5;
int a[N], dp[N];
int n;
int ans = 1;
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	for (int i = 0;i < n;i++){
		dp[i] = 1;
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < i;j++){
			if (a[j] < a[i]){
				dp[i] = max(dp[i], dp[j] + 1);
				ans = max(ans, dp[i]);
			}
		}
	}
	cout << ans << endl;
	return 0;
}