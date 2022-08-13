#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , a , b;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		if ((a * b) % 2 == 0)
			cout << (a * b) / 2 << endl;
		else
			cout << (a * b) / 2 + 1 << endl;
	}
}

