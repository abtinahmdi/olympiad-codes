#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a, b, c, k, sto;
int main(){
	ll a, b, c, k;
	cin >> a >> b >> c >> k;
	sto = a - b;
	k %= 2;
	while(k){
		sto = sto * -1;
		k--;
	}
	cout << sto << "\n";
}
