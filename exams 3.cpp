#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], b[N], c[N], d[N], n;
int main () 
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
		c[i] = a[i];
	}
	sort (a, a + n);
	memset (d, 0, n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (c[i] == a[j] && d[j] == 0){
				d[j] = b[i];
				break;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] == a[j]){
				if (d[i] > d[j]){
					int x = d[i];
						d[i] = d[j];
						d[j] = x;
				}
			}
		}
	}
	int x = d[0];
	for (int i = 1; i < n; i++){
		if (d[i] < x){
			x = a[i];
		}
		else {
			x = d[i];
		}
	}
	cout << x << endl;
}