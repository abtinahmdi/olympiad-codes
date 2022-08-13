#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int dp[N];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    a[n] = 0;
    int maxx = 1;
    for(int i = 1; i <= n; i++){
        if(a[i - 1] < a[i]){
            dp[i]=dp[i-1]+1;
        }
        else{
            maxx=max(maxx,dp[i-1]);
            dp[i]=1;
        }
    }
    cout << maxx << '\n';
    return 0;
}