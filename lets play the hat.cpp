#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 8;
int t, n, m, k, x, ls, pre, curr;
void solve()
{
	cin >> n >> m >> k;
	while(k--){
		x = n / m;
		ls = pre;
		for(int i = 1;i <= m;i++){
			curr = x;
			if(i == n % m){
				curr++;
			}
			cout << curr << " ";
			for(int j = 1;j <= m;j++){
				ls++;
				cout << ls % n + 1 << " ";
			}
			cout << '\n';
			if(i == n % m)
				pre = ls;
		}
	}
	cout << '\n';
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
