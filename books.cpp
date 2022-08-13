#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, l, mx, cnt, a[N];
int main()
{
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		cin >> l;
		a[i] = a[i - 1] + l;
		if(a[i] - a[cnt] > k) 
			cnt++;
		mx = max(mx, i - cnt);
	}
	cout << mx << '\n';
	return 0;
}