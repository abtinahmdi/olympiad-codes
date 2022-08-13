#include<bits/stdc++.h>
using namespace std;
bool y;
string s;
bool wub(int x)
{
	if (s[x] == 'W' && s[x + 1] == 'U' && s[x + 2] == 'B')
		y = true;
	else
		y = false;
	return y;
}
int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		if (wub(i) == true){
			i = i + 2;
			continue;
		}
		else{
			while (wub(i) == false && i < s.size()){
				cout << s[i];
				i++;
			}
			i--;
			cout << " ";
		}
	}
	return 0;
}