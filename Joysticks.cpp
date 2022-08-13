#include<bits/stdc++.h>
using namespace std;
int a, b, cnt = 0;
int main() 
{
	cin >> a >> b;
	if (a < 2 && b < 2) {
		cout << 0 << endl;
		exit(0);
	}
		while (a > 0 && b > 0) {
		if (a <= b) {
			a++;
			b -= 2;
		}
		else {
			b++;
			a -= 2;
		}
		cnt++;
	}
	cout << cnt << '\n';
}
