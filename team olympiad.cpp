#include<bits/stdc++.h>
using namespace std;
int a[4], c[4][5000];
int n, y, i, b;
int main()
{
	cin >> n;
	for(i = 0;i < n; i++){
		cin >> b;
		a[b]++;
		c[b][a[b]] = i+1;
	}
	y = min( a[1], min(a[2], a[3]));
	cout<< y <<endl;
	for(i = 1;i <= y ;i++){
		cout << c[1][i] << " " << c[2][i] << " " << c[3][i] <<endl;
	}
}