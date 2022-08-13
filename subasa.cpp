#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int t[N], n, a, b;
int solve(long long r,long long l)
{
	int f = 0;
	int g = 0;
	for (int i = 0;i < r;i++)
		g = max(g, t[i]);
	for (int i = r + 1; i < l;i++){
		if (i == r + 1)
			f = t[i];
		else
			f = min(f, t[i]);
	}
	if (g > t[r])
		return 2;
	else if(f < t[r])
		return 1;
}
int main()
{
	cin >> n >> a >> b;
	for ( int i = 0;i < n; i++){
		cin >> t[i];
	}
	int mx = 0;
	bool res = true;
	for (int i = 0;i < n;i++){
		if (i != n - 1 && t[i] > 45 + a && t[i] > t[i + 1])
			res = false;
		if (t[i] > 90 + b)
			res = false;
	}
	if (res)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}