#include<bits/stdc++.h>
using namespace std;
int res = 1;
long long pwr(long long a, long long b)
{
	for (int i = 0; i < b; ++i){
		res *= a;
	}
	return res;
}
int main()
{
	long long mod = 1e9 + 7;
	long long a, b;
	cin >> a >> b;
	cout << pwr(a, b) % mod;
}