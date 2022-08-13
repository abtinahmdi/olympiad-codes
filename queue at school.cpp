#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	char a[n];
	for (int i = 0; i < n; i++) {
		a[i] = '0';
	}
	for (int k = 0; k < t; k++){
		for (int i = 0; i < n - 1; i++){
			if (s[i] == 'B' && s[i + 1] == 'G'){
				a[i + 1] = 'B';
				a[i] = 'G';
				i++;
			}
			else{
				a[i] = s[i];
			}
		}
		if (a[n - 1] == '0'){
			a[n - 1] = s[n - 1];
		}
		for (int i = 0; i < n; i++){
			s[i] = a[i];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++){
		cout << a[i];
	}
}