#include<bits/stdc++.h>
using namespace std;
long long sum;
int mx, n;
int main() 
{
	ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
		mx = max(mx, x);
	}
	cout << max(1LL * mx, (sum + n - 2) / (n - 1)) << endl;
	return 0;
}
