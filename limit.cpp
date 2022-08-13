# include <bits/stdc++.h>
using namespace std;
int n, m, a, b, t, g;
int main()
{
	cin >> n >> m >> a;
	for(int i = 0;i < n + 1;i++)
		cin >> b;
	if(n < m){
		cout << "0/1";
		return 0;
	}
	if(a * b < 0) 
		cout << "-";
	if(n > m) 
		cout << "Infinity";
	else{
		a = abs(a);
		b = abs(b);
		g = __gcd(a, b);
		cout << a / g << "/" << b / g;
	}
	return 0;
}