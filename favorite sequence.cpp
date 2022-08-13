#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (t; t > 0; t--) {
		int n; 
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int ans = 1, o = n - 1, l = 1;
		for (int i = 0; i < n; i++) {
			cout << a[ans] << " ";
			ans =  ans + l * o;
			l *= -1;
			o--;
		}
		cout << endl;
	}
}
