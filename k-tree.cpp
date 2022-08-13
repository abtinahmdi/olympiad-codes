#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 3e4 + 5;
const ll mod = 1e9 + 7;
ll dp[N];
ll asghar(ll k, ll n)
{
	ll asd;
	for(int i = 0;i <= n;i++){
		dp[i] = 0;
	}
	for(int i = 1;i <= k;i++){
		dp[i] = 1;
	}
	for(int i = 1;i <= k;i++){
		for(asd = i + 1;asd <= i + k;asd++){
			if(asd > n){
				break;
			}
			dp[asd] += dp[i];
			dp[asd] %= M;
		}
	}
	return dp[n];
}
int main() {
	int tmp, n, k, d;
	cin >> n >> k >> d;
	tmp = asghar(k, n) - asghar(d - 1, n);
	tmp += M;
	tmp %= M;
	cout << tmp;
	return 0;
}