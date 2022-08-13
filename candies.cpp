#include<bits/stdc++.h>
using namespace std;
int n, x, k;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		k = 3;
		while (x % k != 0){
			k = 2 * k + 1;
		}
		cout << x / k << endl;
	}
	return 0;
}