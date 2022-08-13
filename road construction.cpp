#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int n, m, l, r, a[N];
int main()
{
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> l >> r;
		a[l] += 1;
		a[r] += 1;
	}
	for(int i = 1;i <= n;i++){
		if(a[i] == 0){
			l = i;
			break;
		}
	}
	cout << n - 1 << '\n';
	for(int i = 1;i <= n;i++){
		if(i != l)
			cout << l << " " << i << '\n';
	}
	return 0;
}