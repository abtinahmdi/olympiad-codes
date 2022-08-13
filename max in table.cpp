#include<iostream>
using namespace std;
const int N = 1e2 + 5;
int a[N][N], n;
int main()
{
	cin >> n;
	for(int i = 0 ; i < n; i ++){
		a[0][i] = 1;
		a[i][0] = 1;
	}
	for(int i = 1; i < n ; i ++){
		for(int j = 1 ; j <= n ; j++){
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	cout << a[n - 1][n - 1]<< endl;

}
