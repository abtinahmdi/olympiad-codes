#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], t, k;
int main()
{
	int ans = 1;
	for (int i = 1; i <= 1000; i++){
		while(ans % 10 == 3 || ans % 3 == 0){
			ans++;
		}
		a[i] = ans;
		ans++;
	}
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> k;
		cout << a[k] << endl;
	}
	return 0;
}