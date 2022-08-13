#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a*a) + (b*b) == (c*c)){
		cout << "YES" << endl;
	}
	else if (a + b < c || a + c < b || b + c < a){ 
		cout << "NO" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
