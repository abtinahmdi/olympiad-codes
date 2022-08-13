#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int a[N];
int n;
void bubble(int a[])
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	for (int i = 1; i < n;i++){
		for (int j = 1;j >= 0; j--){
			if (a[j + 1] < a[j])
				swap(a[j + 1], a[j])
		}
	}
}