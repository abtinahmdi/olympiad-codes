#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	cin >> n >> s;
	if(s[0] != s[n - 1])
		cout << 1 << '\n';
	else{
		for(int i = 1;i < n - 2;i++)
			if(s[i] != s[0] && s[i + 1] != s[0]){
				cout << 2 << '\n';
				return 0;
			}
		cout << -1 << '\n';
	}
	return 0;
}
