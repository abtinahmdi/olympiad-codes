#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	while(q--){
		int t0 = 0, n, m;
		cin >> n >> m;
		int t, x, y, l = m, r = m, f = 1;
		while(n--){
			cin >> t >> x >> y;
			l -= t - t0,r += t - t0, t0 = t;
			if(l > y || r < x)
				f = 0;
			if(l < x)
				l = x;
			if(r > y)
				r = y;
		}
		if (f)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	return 0;
} 