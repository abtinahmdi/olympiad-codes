#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	int n, k;
	cin >> n >> k;
	while(k > 0)
	{
		if(n % 10 != 0) 
		{
			n--;
			k--;
		}
		else 
		{
			n /= 10;
			k--;
		}
	}
	cout << n;
}