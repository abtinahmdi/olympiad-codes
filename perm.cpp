#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> v;
int t, n, k;
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> k;
		v.pb(k);
	}
	if(v[0] != n && v[n - 1] != n){
		cout << -1 << '\n';
		return;
	}
	if(a[0] != n)
		reverse(v.begin(), v.end() - 1);
	else
		reverse(v.begin() + 1, v.end());
	for(int i = 0;i < n;i++){
		cout << v[i] << " ";
	}
	cout << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}