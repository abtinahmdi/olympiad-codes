#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
	cin >> a >> b;
	for (int i = b; i > 0; i--)
	{
		if (b / i - (a - 1) / i >= 2)
		{
			cout << i << endl;
			break;
		}
	}
}