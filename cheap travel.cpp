#include<bits/stdc++.h>
using namespace std;
int n, m, a, b;
int main()
{
	int min;
	cin >> n >> m >> a >> b;
	int a1 = (n / m) * b + (n % m) * a;
	int a2 = (n / m) * b + b;
	int a3 = n * a;
	min = a1;
	if(a2 < min)
		min = a2;
	if(a3 < min)
		min = a3;
	cout << min << endl;
}