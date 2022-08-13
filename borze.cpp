#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin >> s;
	for (int i = 0;i < s.size(); i++){
		if (s[i] == '.'){
			cout << "0";
		}
		if (s[i] == '-' && s[i + 1] == '-'){
			i++;
			cout << "2";
			continue;
		}
		if (s[i] == '-' && s[i + 1] == '.'){
			i++;
			cout << "1";
		}
	}
}