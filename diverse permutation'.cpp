#include<bits/stdc++.h>
using namespace std;
int n, k, r;
int main()
{
	cin >> n >> k;
	r = 1;
	cout << "1 ";
	for(int i = 0;i < k;i++){
		if(i % 2 == 0)
			r += k - i;
		else
			r -= k - i;
		cout << r << " ";
	}
	for(int i = k + 2;i <= n;i++){
		cout << i << " ";
	}
	return 0;
}