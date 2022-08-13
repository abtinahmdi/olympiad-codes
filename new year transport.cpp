#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v(N);
int n, t, tmp;
int main()
{
	cin >> n >> t;
	t = t - 1;
	for(int i = 0;i < n - 1;i++)
		cin >> v[i];
	while(tmp < t)
		tmp += v[tmp];
	if (tmp == t)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
	return 0;
}