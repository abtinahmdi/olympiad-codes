#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2 * 1e5 + 7;
const ll mod = 998244353;
ll n, j[N], dp[N];
int main()
{
	cin >> n;
	dp[0] = 1;
	for(int i = 1;i < N;i++){
		dp[i] = (dp[i - 1] * 10) % mod;
	}
	for(int i = 1;i < n;i++){
		j[i] = 180 * dp[n - i - 1] + (n - i - 1) * 810 * dp[n - i - 2];
		cout << j[i] % mod << " ";
	}
	cout << "10";
	return 0;
}