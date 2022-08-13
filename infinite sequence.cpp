#include<bits/stdc++.h>
using namespace std;
const int N = 1e6	 + 5;
int a[N];
long long n, sum;
int main()
{
	cin >> n;
	int k = 0;
	while (sum + k + 1 < n){
		k++;
		sum += k;
	}
	cout << n - sum << endl;
	return 0;
}