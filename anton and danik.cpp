#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	string s;
	cin >> s;
	int a = 0, d = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'A'){
			a++;
		}
		else{
			d++;
		}
	}
	if (a > d){
		cout << "Anton";
	}
	else if (d > a){
		cout << "Danik";
	}
	else{
		cout << "Friendship";
	}
}