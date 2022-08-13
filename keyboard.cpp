#include<bits/stdc++.h>
using namespace std;
string s, c;
int main()
{
	string alpha = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> s >> c;
	for(int i = 0;i < c.size();i++){
		cout << alpha[alpha.find(c[i])-(s == "R")+(s == "L")];
	}
}