#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n;i++){
		cout << a[i] << " " ;
	}
	return 0;
}