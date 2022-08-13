#include<bits/stdc++.h>
using namespace std;
int n, p, v, t, ans;
int main()
{
	cin >> n;
	while(n--){
		cin >> p >> v >> t;
		int sum = p + v + t;
		if(sum >= 2)
			ans++;
	}
	cout << ans << '\n';
}
