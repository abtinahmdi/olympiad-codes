#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N], dp[N], ans;
stack<int> s;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++)
	{
	    dp[i] = 1;
		cin >> a[i];
		while(!s.empty() && a[s.top()] < a[i]){
            dp[i] = max(dp[i], dp[s.top()] + 1);
			s.pop();
		}
		if(s.empty())
			dp[i] = N;
		else
			ans = max(dp[i], ans);
		s.push(i);
	}
	cout << ans;
	return 0;
}
