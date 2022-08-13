#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		string b;
		cin >> b;
		cout << b.substr(0,2);
		for(int i = 3;i <= b.length();i = i + 2){
			cout << b[i];
		}
		cout << endl;
	}
	return 0;
}