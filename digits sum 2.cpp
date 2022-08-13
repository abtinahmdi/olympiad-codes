#include<bits/stdc++.h>
using namespace std;
int n, ans;
int main(){
	cin >> n;
	n++;
	int ans = 0;
	while (n > 9) 
		ans += 9, n /= 10;
	ans += n - 1;
	cout << ans << '\n';
	return 0;
}
