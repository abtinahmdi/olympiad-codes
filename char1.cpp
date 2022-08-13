#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n;
char a[N];
int main()
{
	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}
	cin >> a;
	int x = strlen(a);
	if (x > 4)
		cout << a[0] << x - 2 << a[x-1] << endl;
	else
		cout << a << endl;
	return 0;
}