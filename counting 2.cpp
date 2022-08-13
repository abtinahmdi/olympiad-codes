#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 5;
int n, q, a[N], x, ans[N];
int main()
{
	cin >> n >> q;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a, a + n);
	while(q--){
		cin >> x;
		cout << a + n - lower_bound(a, a + n, x) << '\n'; 
	}
	return 0;
}