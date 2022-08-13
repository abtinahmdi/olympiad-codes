#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, k, r, l = 1, ans, cnt;
int main()
{
	cin >> t;
	while(t--){
		cin >> n >> k >> r;
		while(l <= n && cnt++ <= 100){
			if((n - l) % r == 0) 
				ans = 1;
			l *= k;
		}
		if(ans) 
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	return 0;
}