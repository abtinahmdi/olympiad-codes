#include <bits/stdc++.h>
using namespace std;
int n, a, s, x;
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		a += x;
		if(a < 0){
			s++;
			a = 0;
		}
	}
	cout<<s<<endl;
}
