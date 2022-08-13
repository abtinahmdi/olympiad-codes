#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, sum, x, mod;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x + n - i;
	}
	mod = sum % n;
	for (int i = 0; i < mod; i++){
		cout << sum / n - n + i + 1<< " ";
	}
	for (int i = mod; i < n; i++){
		cout << sum / n - n + i << " ";
	}
}