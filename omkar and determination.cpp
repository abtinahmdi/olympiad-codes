#include<bits/stdc++.h>
using namespace std;
const int N = 2e3 + 5;
long long n, m, t, l, r, a[N], dp[N];
string s[N];
int main()
{
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	for(int i = 1;i < n;i++){
		for(int j = 1;j < m;j++){
			dp[j] += (s[i][j - 1] == 'X' && s[i - 1][j] == 'X');
		}
	}
	for(int i = 1;i < m;i++){
		dp[i] = dp[i] + dp[i - 1];
	}
	cin >> t;
	for(int i = t;i >= 1;i--){
		cin >> l >> r;
		if(dp[l - 1] - dp[r - 1] == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
