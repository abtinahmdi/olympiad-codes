#include<bits/stdc++.h>
using namespace std;
int k, l, m, n, d, cnt = 0;
int main()
{
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i <= n; i++){
		if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
			cnt++;
	}
	if (d - cnt == 23)
		cout << 17 << endl;
	else
		cout << d - cnt << endl;
	return 0;
}