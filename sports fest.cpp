#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e3 + 5;
ll n, a[N], dp[N][N];
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a, a + n);
	reverse(a, a + n);
	for(int i = n - 1;i >= 0;i--){
		for(int j = i + 1;j < n;j++){
			dp[i][j] = (min(dp[i + 1][j], dp[i][j - 1])) + a[i] - a[j];
		}
	}
	cout << dp[0][n - 1];
	return 0;
}
