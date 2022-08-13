#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int dp[N], dp2[N];
int main(){
	int n;
	cin >> n;
	int h[n], res[n];
	for(int i = 0; i < n; i++){
		cin >> h[i];
	}
	dp[0] = 1;
	dp2[n-1] = 1;
	for(int i = 1; i < n; i++){
		dp[i] = min(dp[i-1] + 1, h[i]);
	}
	for(int i = n - 2; i > -1; i--){
		dp2[i] = min(dp2[i + 1] + 1, h[i]);
	}
	for(int i = 0; i < n; i++){
		res[i] = min(dp[i],dp2[i]);
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans,res[i]);
	}
	cout << ans << endl;
}



