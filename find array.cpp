#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, n, a[N];
void solve()
{
	cin >> n;
	for(int i = 2;i <= n + 1;i++){
		cout << i << " ";
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