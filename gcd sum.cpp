#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, s, sum;
void solve()
{
	cin >> n;
	for(ll i = n; i < n + 100000; i++){
		s = i;
		sum = 0;
		while (s != 0){
			sum += s % 10;
			s = s / 10;
		}
		if (__gcd(i, sum) != 1){
			cout << i << endl;
			return;
		}
	}
}
int main() 
{
	cin >> t;
	while(t--){
		solve();
	}
}