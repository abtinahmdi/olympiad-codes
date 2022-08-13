#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
vector<int> v1(N), v2(N), a(N), b(N);
ll t, n, ans;
void solve()
{
	int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
    	cin >> v1[i] >> v2[i];
    	a[v1[i]]++; 
		b[v2[i]]++;
    }
	ans = n * 1LL * (n - 1) * (n - 2) / 6;
    for (int i = 0; i < n; ++i) 
    	ans = ans - (a[v1[i]] - 1) * (b[v2[i]] - 1) * 1LL;
    cout << ans << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}