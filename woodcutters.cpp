#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N][3],a[N],arr[N];
int main(){
	int n;
	cin >> n;
	fill(a, a + N,INT_MAX);
	for(int i = 0; i < n; i++){
		cin >> a[i] >> arr[i];
	}
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	dp[0][1] = 1;
	dp[0][2] = (a[0] + arr[0] < a[1]? 1: 0);
	for(int i = 1; i < n; i++){
		dp[i][1] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
		dp[i][2] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
		dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
		if(a[i] - arr[i] > a[i-1]){
			dp[i][1] = max({dp[i][1], dp[i-1][0] + 1, dp[i-1][1] + 1});
		}
		if(a[i] - arr[i] > a[i-1] + arr[i-1]){
			dp[i][1] = max(dp[i][1], dp[i-1][2] + 1);
		}
		if(a[i] + arr[i] < a[i + 1]){
			dp[i][2] = max({dp[i][2],dp[i-1][0] + 1,dp[i-1][1] + 1,dp[i-1][2] + 1});
		}
	}
	cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << endl;
}
