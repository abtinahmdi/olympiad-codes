#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], b[N];
bool right(int a, int b)
{
	if (a > b)
		return false;
	else if (b >= a)
		return true;
}
int main()
{
	int n, cnt;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
		if (right(a[i], b[i]))
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}