#include<bits/stdc++.h>
using namespace std;
int n, x, y, z, a;
int main()
{
	cin >> n;
	while(n > 0)
	{
		n--;
		cin >> x;
		if (x >= a)
			y++;
		else
			y = 1;
		if (y >= z) 
			z = y;
		a = x;
	}
	cout<<z;
}