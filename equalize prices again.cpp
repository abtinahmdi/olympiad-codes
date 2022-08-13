#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int q, n, ans, a[N];
int main()
{
	cin >> q;
	for (int i = 0;i < q;i++){
		cin >> n;
		ans = n - 1;
		for (int j = 0;j < n;j++){
			cin >> a[j];
			ans += a[j];
		}
		cout << ans / n << '\n';
	}
	return 0;
}