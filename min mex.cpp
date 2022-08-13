#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int t;
	cin >> t;
	for (int i = 0;i < t;i++){
		cin >> s;
		s += '1';
		int val = 0;
		for(int j = 0;j < s.size();j++)
			if(s[j] == '0' && s[j + 1] == '1')
				val++;
		cout<< min(val, 2) << '\n';
	}
	return 0;
}
