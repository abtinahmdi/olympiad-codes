#include <bits/stdc++.h>
using namespace std;
int a,b,r;
int main()
{
	cin >> a >> b >> r;
	r *= 2;
	if(r <= min(a, b)){
		cout << "First";
	}
	else{
		cout << "Second";
	}
	return 0;
}