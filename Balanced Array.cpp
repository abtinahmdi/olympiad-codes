#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char a[N];
int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n;
		if (n % 4 != 0){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int j = 2; j <= n; j += 2){
			cout << j << " ";
		}
		for (int j = 1; (j+1) <= n; j += 2){
			if (j == n - 1){
				j += n/2;
			}
			cout << j << " ";	
		}
		cout << endl;
	}
}