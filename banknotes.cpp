#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll t, n, k, res, tmp, a[N];
void solve()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		a[i] = pow(10, a[i]);
	}
	k++;
	for(int i = 0; i < n - 1; i++){
		if(k == 0)
			break;
		tmp = min(a[i + 1] / a[i] - 1, k);
		res += tmp * a[i];
		k -= tmp;
	}
	if(k > 0)
		res += a[n - 1] * k;
	cout << res << endl;
	res = 0;
}
int main()
{
    cin>>t;
    while(t--){
        solve();
    }
}