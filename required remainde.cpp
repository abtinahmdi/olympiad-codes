#include<bits/stdc++.h>
using namespace std;
const int N= 1e4 + 5;
int a[N];
 
int main()
{
	long long n;
	long long a, b, c, ans;
	cin >> n;
	while(n--)
	{
		cin >> a >> b >> c;
		if(c - c % a + b <= c)
			cout << c - c % a + b<< endl;
		else
			cout <<c - c % a - (a - b)<< endl;
	}
}