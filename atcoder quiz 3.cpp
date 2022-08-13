#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n >= 42){
		n++;
	}
	if(n < 10){
		cout << "AGC00" << n << '\n';
	}
	else if(n >= 10 && n < 100){
		cout << "AGC0" << n << '\n';
	}
	else{
		cout << "AGC" << n << '\n';
	}
}