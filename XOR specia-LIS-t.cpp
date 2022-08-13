#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
ll t, n, a[N];
bool cmp;
void solve()
{
	cin >> n;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	if(n % 2 == 0) 
		cmp = 1;
	else{
		cmp = 0;
		for(int i = 1;i < n;i++)
			if(a[i] >= a[i + 1]) 
				cmp = 1;
	}
	if (cmp) 
		cout << "YES" << '\n';
	else 
		cout << "NO" << '\n'; 
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}