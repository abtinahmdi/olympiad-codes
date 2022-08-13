#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin >> n;
	if (n > 0)
		cout << n;
	if (n < 0){
		int x = n / 10;
		int y = ((n / 100) * 10) + (n % 10);		
		if (x > y)
			cout << x;
		else if (n / 10 == 1 || n / 10 == -1)
			cout << "0";
		else
			cout << y;
		return 0;
	}
}