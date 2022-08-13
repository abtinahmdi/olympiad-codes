#include<bits/stdc++.h>
using namespace std;
const int N = 3e2 + 2e3;
int t, n, arr[N];
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int a = arr[0], b = arr[1], c = arr[2];
		if (a == b && b == c) {
			for (int i = 3; i < n; i++) {
				if (arr[i] != a) {
					cout << i + 1 << endl;
					break;
				} 
			}
		}
		else if (b == c && a != c)
			cout << 1 << endl;
		else if (a == c && b != a)
			cout << 2 << endl;
		else if (a == b && c != a)
			cout << 3 << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}