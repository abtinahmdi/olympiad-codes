#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], b[N], n;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	for (int i = 0;i < n;i++){
		for (int j = 0; j < n;j++){
			if (a[i] > a[j]){
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
			if (a[i] == a[j]){
				if (b[i] > b[j]){
					swap(a[i], a[j]);
					swap(b[i], b[j]);
				}
			}
		}
	}
	int tmp = 0;
	for (int i = 0; i < n;i++){
		if (b[i] >= tmp)
			tmp = b[i];
		else
			tmp = a[i];
	}
	cout << tmp << endl;
}