#include<bits/stdc++.h>
using namespace std;
const int N = 3 * 1e5;
int n, q, a[N], k, mx, dp[57];
int main	()
{
	cin >> n >> q;
	mx = -1;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	memset(dp, -1, sizeof dp);
	for(int i = 1;i <= mx;i++){
		for(int j = 1;j <= n;j++){
			if(a[j - 1] == i){
				dp[i] = j;
				break;
			}
		}
	}
	for(int i = q - 1;i >= 0;i--){
		cin >> k;
		cout << dp[k] << " ";
		for(int i = 1;i <= mx;i++){
			if(dp[k] > dp[i] && dp[i] != -1){
				dp[i] += 1;
			}
		}
		dp[k] = 1;
	}
}