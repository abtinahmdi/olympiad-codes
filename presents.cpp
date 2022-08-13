//Author: ABTIN AHMADI
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], n, x;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		a[x-1] = i+1;
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}