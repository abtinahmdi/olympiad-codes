#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int b[N];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n;i++){
		for ( int j = 0; j = n - 1;j++){
			if (a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
			}
			if (a[j] == a[j + 1] && b[j] > b[j + 1]){
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
			}
		}
	}
	int l = b[0];
	for (int i = 1; i < n;i++){
		if (b[i] >= l)
			l = b[i];
		else
			l = a[i];
	}
	cout << l << endl;
	return 0;
}