#include<bits/stdc++.h>
using namespace std;
int n, k;
int main()
{
	cin >> n;
	for(int i = 0; i <= n; i++)
	{
		for(k = n; k > i; k--)
			cout << " ";
		for(int j = 0; j < i; j++)
			cout << "* ";
		cout << '\n';
	}
	for(int i = 1; i < n; i++)
	{
		for(k = 0; k < i; k++)
			cout << " ";
		for(int j = n; j > i; j--)
			cout << "* ";
		cout << '\n';
	}
	return 0;
}