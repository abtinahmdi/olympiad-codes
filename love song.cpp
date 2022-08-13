#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5e1;
long long n, k, l, r;
long long dp[N];
string s;
int main()
{
	cin >> n >> k;
	cin >> s;
	dp[0] = s[0] - 97 + 1;
	for(int i = 1;i < n;i++){
		dp[i] = dp[i - 1] + s[i] - 97 + 1;
	}
	while(k--){
		cin >> l >> r;
		l -= 1;
		r -= 1;
		if(l == 0)
			cout << dp[r] << endl;
		else
			cout << dp[r] - dp[l - 1] << endl;
	}
	return 0;
}