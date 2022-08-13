#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
long long n, k, a[N], b[N], ans;
string s, c;
int main()
{
    cin >> n >> k >> s >> c;
	for(int i = 0,j = 0;j < k;i++)
		if(s[i] == c[j])
			a[j++] = i;
	for(int i = n - 1, j = k - 1;j >= 0;i--)
		if(s[i] == c[j])
			b[j--] = i;
	for(int i = 0;i < k - 1;i++)
		ans = max(ans, b[i + 1] - a[i]);
	cout << ans << '\n';
	return 0;
}