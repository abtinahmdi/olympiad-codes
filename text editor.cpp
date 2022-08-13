#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>


using namespace std;

int main()
{
	int i, j, k;
	int n, m;
	string s;
	cin >> s;
	list<char> word;
	auto itr = word.begin();
	n = s.length();
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'L')
		{
			if (itr != word.begin())
				itr--;
		}
		else if (s[i] == 'R')
		{
			if (itr != word.end())
				itr++;
		}
		else
			word.insert(itr, s[i]);
	}
	itr = word.begin();
	while (itr != word.end()) {
		cout << *itr;
		itr++;
	}
	return 0;
}