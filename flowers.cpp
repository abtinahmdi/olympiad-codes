#include<bits/stdc++.h>
#define ll long long
#define FAST std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
const int N = 1e6 + 5;
ll dp[N];
ll arr[N];
const ll mod = 1000000007;
ll n, k;
int main()
{
	FAST;
	cin >> n >> k;
	arr[0] = 1;
	dp[0] = 1;
	for(int i = 1;i <= k - 1; i++){
		dp[i] = 1;
		arr[i] = (arr[i - 1] + dp[i]) % mod;
	}
	for(int i = k; i < 1000000; i++){
		dp[i] = (dp[i - 1] + dp[i - k]) % mod;
		arr[i] = (arr[i - 1] + dp[i]) % mod;
	}
	for(int i = 0; i < n; i++){
		ll a , b;
		cin >> a >> b;
		cout << (arr[b] - arr[a - 1] + mod) % mod << endl;
	}
	return 0;
}
