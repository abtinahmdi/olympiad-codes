#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, a[N], b[N];
bool ok(int x)
{
	int ans = 0;
	for (int i = 0; i < n; i++){
		if (a[i] * x > b[i])
			ans += a[i] * x - b[i];
	}
	if(ans <= k)
		return true;
	else
		return false;
}
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	int down = -1;
	int up = 1e5;
	while (up - down > 1)
	{
		int md = (up + down) / 2;
		if (ok(md))
			down = md;
		else
			up = md;
	}
	cout << down << '\n';
}