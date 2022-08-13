#include <bits/stdc++.h>
using namespace std;
int a[101],n,i=1;
int main(){
	while(cin >> a[n++]);
	sort(a, a + n);
	for(;i < n - 1;i++)
		cout << a[i] << '+';
	cout << a[n - 1];
}
