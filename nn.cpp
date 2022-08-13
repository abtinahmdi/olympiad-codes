#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int a[N];
int n;
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			int tmp;
			cin >> tmp;
			a[j] += tmp;
		}
	}
	for (int i = 0;i < n;i++){
		cout << a[i] << endl;
	}
	
		
}