#include<bits/stdc++.h>
using namespace std;
int n, a, cnt;
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		int x = __gcd(n, i);
		if (x == 1)
			cnt++;
	}
	cout << cnt << endl;
}