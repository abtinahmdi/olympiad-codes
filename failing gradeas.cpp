#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int n, p, cnt;
int main()
{
	cin >> n >> p;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		if (a[i] < p)
			cnt++;
	}
	cout << cnt;
}