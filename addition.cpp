#include<bits/stdc++.h>
using namespace std;
int n, x, sum;
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x;
		sum += x;
	}
	if(sum % 2 == 0)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}
