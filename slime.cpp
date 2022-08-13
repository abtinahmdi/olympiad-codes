#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5 + 5;
ll n, ans, a[N];
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	sort(a, a + n);
	ans = a[n - 1];
	if(n > 1)
		ans -= a[0];
	for(int i = 1;i < n - 1;i++){
		ans += abs(a[i]);
	}
	cout << ans << endl;
}