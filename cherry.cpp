#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long T, n, a[100005], ans;
	cin >> T;
	while (T--){
		cin >> n;
		ans = 0;
		for (int i=1;i<=n;i++){
			cin >> a[i];
			ans = max(a[i] * a[i-1],ans);
		}
		cout << ans << endl;
	}
}