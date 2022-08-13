#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, m;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> n >> m;
		cout << min(2,n - 1) * m << endl;
	}
}