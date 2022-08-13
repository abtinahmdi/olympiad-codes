#include<bits/stdc++.h>
using namespace std;
int t,a,b,s;
int main(){
	cin >> t;
	while(t--){
		cin >> a >> b;
		s = min(max(2*a,b), max(a,2*b));
		cout << s*s << endl;
	}
}