#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], n, d, ans;
int main()
{
	cin >> n >> d;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		if (i > 0 && a[i] <= a[i-1]){
			ans += (a[i-1] - a[i])/d + 1;
			a[i] += ((a[i - 1] - a[i])/d + 1) * d;
		}
	}
	cout << ans << endl;
	return 0;
}