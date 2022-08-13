#include<bits/stdc++.h>
#define ll long long
#define FAST std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const ll N = 3e6 + 5;
int t,n;
ll a[N],b[N]; 
int main()
{
	FAST;
	cin >> t;
	while(t--){
		cin >> n;
		ll ans = 0,d = 1e18;
		for(int i = 0;i < n;i++)
			cin >> a[i] >> b[i];
		for(int i = 0;i < n;i++){
			ans += max(0LL, a[i] - b[(i - 1 + n) % n]);
			d = min(d, a[i] - max(0LL, a[i] - b[(i - 1 + n) % n]));
		}
		cout << ans + d << '\n';
	} 
}