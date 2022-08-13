#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	while (a--)
	{
		int n;
		cin >> n;
		cout << n/3 + (n%3==1) << " " << n/3 + (n%3==2) << endl;
	}
}
