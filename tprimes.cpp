#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N];
bool ok(int n){
	double sqd = (double)sqrt(n);
	int sqi = (int)sqrt(n);
	if(sqi == sqd)
		return true;
	else
		return false;
}
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(ok(a[i]))
			cout << "YES" << '\n';
		else if(a[i] == 1)
			cout << "NO" << '\n';
		else
			cout << "NO" << '\n';
	}
}
