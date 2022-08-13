#include<bits/stdc++.h>
using namespace std;
int n, q;
string s;
int main()
{
	cin >> n >> q;
	for (int i = 0;i < n;i++){
		s += (char)('A' + i); 
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cout << "? "<< s[j] << s[j + 1];
			char ans;
			cin >> ans;
			if (ans == '>')
				swap(s[j], s[j + 1]);
		}
	}
	cout << "! " << s << '\n';
	return 0; 
}