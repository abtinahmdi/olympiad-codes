//100001000001010100101
#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		int d1 = s[i] - '0';
		if (d1 % 8 == 0)
		{
			cout << "YES" << endl;
			cout << d1 << endl;
			exit(0);
		}
		for (int j = i + 1; j  < s.size(); j++)
		{
			int d2 = s[j] - '0';
			if ((d1 * 10 + d2) % 8 == 0)
			{
				cout << "YES" << endl;
				cout << s[i] << s[j];
				exit(0);
			}
			for (int k = j + 1; k < s.size(); k++)
			{
				int d3 = s[k] - '0';
				int tmp =  d1 * 100 + d2 * 10 + d3;
				if (tmp % 8 == 0)
				{
					cout << "YES" << endl;
					cout << s[i] << s[j] << s[k];
					exit(0);
				}
			}
		}
	}
	cout << "NO" << endl;
}