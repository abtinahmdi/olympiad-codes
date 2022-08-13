#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin >> s;
	bool b = 0, c = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'A' && s[i + 1] == 'B' && b == 0){
			i++;
			b = 1;
		}
		else if (s[i] == 'B' && s[i + 1] == 'A' && c == 0 && b == 1){
			i++;
			c = 1;
		}
		if (c == 1 && b == 1){
			break;
		}
	}
	if (c == 1 && b == 1){
		cout << "YES" << endl;
	}
	else {
		b = 0;
		c = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'B' && s[i + 1] == 'A' && c == 0){
				i++;
				c = 1;
			}
			else if (s[i] == 'A' && s[i + 1] == 'B' && b == 0 && c == 1){
				i++;
				b = 1;
			}
			if (c == 1 && b == 1){
				break;
			}
		}
		if (c == 1 && b == 1){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}