#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf = 1e17;
const int N = 1e6 + 7;
ll t, n, a[N], x, cnt, sum;
void solve(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> x;
	sum = a[0] - x;
	cnt++;
	for(int i = 1;i < n;i++){
		if(sum + a[i] - x >= 0){
			cnt++;
			sum = min(0LL, sum) + a[i] - x;
		}
		else
			sum = inf;
	}
	cout << cnt << '\n';
	cnt = 0;
}
int main(){
	cin >> t;
	while(t--){
		solve();
	}
}
