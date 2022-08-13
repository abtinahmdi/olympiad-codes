#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 2 * 1e5;
ll t, n;
vector<ll> v(N);
void solve()
{
	cin >> n;
	for(int i = 0; i < n;i++)
		cin >> v[i];
	if(v[0] != n||v[n - 1] != n){
		cout << "-1" << '\n';
		return;
	}
	if(v[0] != n)
		reverse(v.begin(), v.end() - 1);
	else
		reverse(v.begin() + 1, v.end());
	for(int i = 0;i < n;i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}