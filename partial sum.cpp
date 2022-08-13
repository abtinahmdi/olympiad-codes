#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int ps[N];
int n, l, r, q;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	ps[0] = 0;
	for (int i = 1;i <= n;i++){
		ps[i] = ps[i - 1] + a[i - 1];
	}
	cin >> q;
	for (int i = 0;i < q;i++){
		cin >> l >> r;
		cout << ps[r] - ps[l - 1] << '\n';
	}
	return 0;
}