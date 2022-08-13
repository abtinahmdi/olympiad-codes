#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 998244353;
const int N = 5e2 + 5;
ll dp1[N][N], dp2[N][N];
ll pwr(ll a, ll b)
{
	if (b == 0)
		return 1ll;
	if (b == 1)
		return a;
	if (b & 1ll){
		return (a * pwr(a, b - 1)) % MOD;
	}
	else{
		ll temp = pwr(a, b / 2);
		return (temp * temp) % MOD;
	}
}
ll dfs(int v, int u)
{
	if (u < v)
		return 0;
	if (v == 1)
		return u;
	if (dp2[v][u] != 0)
		return dp2[v][u];
	for (int i = 0; i < v; ++i){
		dp2[v][u] += dfs(v - i, u - (v - 1)) % MOD * pwr(v - 1, i) % MOD * dp1[v][i] % MOD;
		dp2[v][u] %= MOD;
	}
	return dp2[v][u];
}

int main()
{
	int n, k; 
	cin >> n >> k;
	dp1[0][0] = 1;
	for (int i = 1;i <= n;i++){
		dp1[i][0] = 1;
		for (int j = 1;j <= k;j++){
			dp1[i][j] = (dp1[i - 1][j - 1] + dp1[i - 1][j]) % MOD;
		}
	}
	cout << (pwr(k, n) - dfs(n, k) + MOD) % MOD << '\n';
	return 0;
}