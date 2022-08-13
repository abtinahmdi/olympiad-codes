#include<bits/stdc++.h>
using namespace std;
int n[26];
char c[26];
int main()
{
	for (int i = 0;i < 26;i++){
		cin >> n[i];
		c[i] = 'a' + (n[i] - 1);
	}
	cout << c << '\n';
	return 0;
}