#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int n, m, k;
void solve()
{
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n-1; i++){
		int x = a[i+1] - k;
		if(x < 0)
			x = 0;
		m += a[i] - x;
		if(m < 0){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
int main(){
	ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}
