#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, sum;
int main()
{
	cin >> n;
	sum = n;
	ll sq = (int)(sqrt(n));
	for(int i = 1;i <= sq;i++){
		n /= 2;
		cout << n << " ";
		sum += n;
	}
	
	cout << sum << '\n';
	return 0;
}