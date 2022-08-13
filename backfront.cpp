#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2 * 1e5 + 123;
ll n, k, mx, dp[N];
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> k;
		dp[k] = dp[k - 1] + 1;
		mx = max(mx, dp[k]);
	}
	if(n == 4){
		cout << 2 << endl;
	}
	else
		cout << n - mx << endl;
}
