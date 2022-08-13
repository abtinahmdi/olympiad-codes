#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
long long a[N];
long long n, m;
int main()
{
	cin >> n >> m;
	for(int i = 0;i < n;i++)
		cin >> a[i];
	sort(a, a + n);
	for(int i = 0;i < n;i++)
		if(i)
			a[i] += a[i - 1];
	for(int i = 0;i < n;i++){
		if(i >= m)
			a[i] += a[i - m];
		cout << a[i] << ' ';
	}
	return 0;
}