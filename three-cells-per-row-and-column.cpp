#include<bits/stdc++.h>
#define ll long long
#define vs vector<string>
using namespace std;
ll n;
vs ans(n);
int main()
{
	cin >> n;
	string t, s;
	t = ".";
	for(int i = 0;i < n;i++){
		s += t;
	}
	for(int i = 0;i < n;i++){
		ans[i] = s;
	}
	for(int i = 0;i < n;i++){
		ans[i][i] = '#';
		ans[i][(i + 1) % n] = '#';
		ans[i][(i + 3) % n] = '#';
	}
	ans[n - 2][0] = '#';
	ans[n - 1][0] = '.';
	ans[n - 2][1] = '.';
	ans[n - 1][1] = '#';
	for(int i = 0;i < n;i++)
		cout << ans[i] << '\n';
	return 0;
}
