#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int t, n, mx, a[N], b[N];
bool ok(int x){
	int k = 0;
	for(int i = 0;i < n;i++){
		if(k == x)
			break;
		if(b[i] >= k && a[i] >= (x - k - 1))
			x++;
	}
	k = max(k, 1);
	return k;
}
void solve(){
	cin >> n;
	mx = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
		int idx = min(i, b[i]);
		idx = min(a[i], (n - i - 1));
		mx = max(idx, mx);
	}
	mx++;
	int l = 0, r = mx + 1;
	while(r - l > 1){
		int mid = (r + l) / 2;
		if(ok(mid))
			l = mid;
		else
			r = mid;
	}
	cout << l << '\n';
}
int main(){
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
