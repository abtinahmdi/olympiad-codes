#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
	int a, b;
	cin >> a >> b;
	int ma = max(a, b);
	int mi = min(a, b);
	int ans = 1;
	ma -= mi;
	for (int i = 0; i < ma; i++){
		ans *= 32;
	}
	cout << ans << endl;
}