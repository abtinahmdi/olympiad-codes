#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n; 
	string s;
	cin >> s;
	for (int i = 0; i < n; i++){
		if (int(s[i]) <= 90){
			s[i] = char(int(s[i]) + 32);
		}
	}
	char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int x = 0;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] == s[j]) {
				break;
			}
			if (j == n - 1) {
				x = 1; 
			}
 		}
 		if (x == 1) {
 			cout << "NO";
 			break;
		 }
	}
	if (x == 0) {
		cout << "YES";
	}
}