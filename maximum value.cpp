#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
int n, a[N], tmp, mx;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 1;i < n;i++){
		for(int j = 2;j <= 10;j++){
			tmp = upper_bound(a, a + i - 1, a[i] / j) - a;
			mx = max(mx, a[i] % a[tmp]);
		}
	}
	cout << mx << '\n';
	return 0;
}