#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
const int N = 3e5 + 5;
const double INF = 1e12;
int q, n, k;
int a[N], b[N], dp[N];
void solve()
{
	cin >> n >> k;
	for(int i = 0;i < n;i++)
		dp[i] = INF;
	for(int i = 0;i < k;i++)
		cin >> a[i];
	for(int i = 0;i < k;i++){
		cin >> b[i];
		dp[a[i]]=b[i];
	}
	for(int i = 2;i <= n;i++){
		dp[i] = min(dp[i], dp[i - 1] + 1);		
	}
	for(int i = 2;i <= n ;i++)
		dp[i] = min(dp[i], dp[i + 1] + 1);
	for(int i = 0;i < n;i++)
		cout << dp[i];
	cout << endl;
}
int main()
{
	cin >> q;
	while(q--){
		solve();
	}
}