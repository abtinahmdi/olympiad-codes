#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int main()
{
	long long n;
	cin >> n;
	long long x = 1;
	for (int i = 0; i < 65; i++){
		if (x > n){
			cout << i - 1 << endl;
			break;
		}
		x = x * 2;
	}
}