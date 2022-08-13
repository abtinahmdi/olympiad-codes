#include<bits/stdc++.h>
using namespace std;
const int N = 2 * (1e5 + 5);
long long n, l, r, a[N];
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	l = 1;
	r = n - 1;
	while(l < r && a[l] < a[l + 1])
		l++;
	while(r >= 1 && a[r] < a[r - 1])
		r--;
	r = n - r + 1;
	(l % 2 == 0 || r % 2 == 0)? cout << "Alice" << '\n' : cout << "Bob" << '\n';
	return 0;
}