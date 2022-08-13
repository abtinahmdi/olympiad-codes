#include<bits/stdc++.h>
using namespace std;
const int N = 105;
char c[N];
char t[N];
int n, x, ans = 0;
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> x;
		for (int j = 0;j < x;j++){
			cin >> c[j];
		}
		for (int j = 0;j < x;j++){
			cin >> t[j];
			if (c[j] == t[j] && t[j] == '1')
				ans++;
		}
		if (ans != 0 || c[0] == '1' || t[x - 1] == '1')
			cout << "NO" << '\n';
		else if (ans == 0)
			cout << "YES" << '\n';
		ans = 0;
	}
}