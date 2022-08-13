#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int y = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'h')
		{
			for(int j = i + 1; j < s.size(); j++)
			{
				if(s[j] == 'e')
				{
					for(int k = j + 1; k < s.size(); k++)
					{
						if(s[k] == 'l')
						{
							for(int n = k + 1; n < s.size(); n++)
							{
								if(s[n] == 'l')
								{
									for(int x = n + 1; x < s.size(); x++)
									{
										if(s[x] == 'o')
										{
											cout << "YES";
											y = 1; 
											break;
										}
									}
								}
								if(y == 1)
									break;
							}
						}
						if(y == 1)
							break;
					}
				}
				if(y == 1)
					break;
			}
		}
		if(y == 1)
			break;
	}
	if(y == 0)
	{
		cout << "NO";
	}
}