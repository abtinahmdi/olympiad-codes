#include<bits/stdc++.h>
using namespace std;
int a, b;
int main(){
	cin >> a >> b;
	if(a <= 0 && b >= 0)
		cout << "Zero" << '\n';
	else{
		if(a > 0)
			cout << "Positive" << '\n';
		else{
			if((b - a) & 1)
				cout << "Positive" << '\n';
			else
				cout << "Negative" << '\n';
		}
	}
}
