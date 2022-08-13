#include <bits/stdc++.h>
using namespace std;
int n,i,x,y;
int main()
{
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> x;
		y = y + x;
	}
	cout << setprecision(14) <<(double)y / n;
}