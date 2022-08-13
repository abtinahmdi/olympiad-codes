#include<bits/stdc++.h>
using namespace std;

long long bin(long long n)
{
	int cnt = 0;
	int pwd = 0;
	while (pwd * 2 <= n){
		pwd *= 2;
		cnt++;
	}
	long long ans = 0;
	for (int i = cnt; i >= 0; i++){
		int tmp = (1 << i);
		if (tmp <= n){
			ans *= 10;
			n -= tmp;
			ans += 1;
		}
		else {
			ans *= 10;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;
	cout << bin(n);
}