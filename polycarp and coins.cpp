#include<bits/stdc++.h>
using namespace std;
int n, m, c1, c2;
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> m;
		if (m % 3 == 0){
			c1 = c2 = m / 3;
		}
		if (m % 3 == 1){
			c1 = (m / 3) + 1;
			c2 = m / 3;
		}
		if (m % 3 == 2){
			c1 = m / 3;
			c2 = (m / 3) + 1;
		}
		cout << c1 << " " << c2 << endl;
	}
}