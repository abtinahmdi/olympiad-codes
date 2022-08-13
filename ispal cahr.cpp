#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e3 + 5;
char s[N];
void isPal()
{
	char tmp[N];
	int len = strlen(s);
	int j = 0;
	for (int i = len - 1; i >= 0; i--){
		tmp[j] = s[i];
		j++;
	}
	for (int i = 0; i < len; i++){
		if (s[i] != tmp[i]){
			cout << "NO" ;
			return;
		}
	}
	cout << "YES";
}
int main()
{
	cin >> s;
	cout << isPal(s);
}