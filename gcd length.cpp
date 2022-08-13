#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, a, b, c, x, y;
int solve()
{
	if(!(cin >> a)){
		return 1;
	}
	cin >> b >> c;
	x = pow(10, a - 1);
	y = pow(10, c - 1) * (pow(10, b - c) + 1);
	cout << x << " " << y << '\n';
	return 0;
}
int main()
{
	cin >>t;
	while(t--){
		if(solve()){
			break;
		}
	}
}