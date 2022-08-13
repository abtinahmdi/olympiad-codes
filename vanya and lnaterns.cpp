#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, l, ai[N];
double d;
int main()
{
	cin >> n >> l;
	for (int i = 0;i < n; i++){
		cin >> ai[i];
	}
	sort(ai, ai + n);
	for (int i = 1; i < n; i++){
		d = max(d, (double)(ai[i] - ai[i - 1])/2);
	}
	d = max((double)(ai[0]), d);
	d = max(d, (double)(l - ai[n - 1]));
	cout << fixed << setprecision(9) << d << endl;
	return 0;
}