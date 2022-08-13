#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N], m, q[N], x, l;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		a[i] += x;
		x = a[i];
	}
	cin >> m;
	while(m--){
		cin >> x;
		l = lower_bound(a, a + n, x) - a;
		cout << l + 1 << '\n';
	}
	return 0;
}