#include <bits/stdc++.h>
using namespace std;
long long sumOfDig(long long a)
{
	long long ans = 0;
	while(a > 0){
		ans += a % 10;
		a /= 10;
	}
	return ans;
}
long long n,s;
int main()
{
	int t;
	cin >> t;
	for (int i = 0;i < t;i++){
		cin >> n >> s;
		long long x = 10,y = n;
		while(sumOfDig(n) > s){
			n += x - n % x;
			x *= 10;
		}
		cout << n - y << "\n";
	}
	return 0;
}