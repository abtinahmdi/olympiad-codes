#include<bits/stdc++.h>
using namespace std;
int x, y, z;
void solver() 
{
	cin >> x >> y >> z;
	if (x == y && x > z) {
		cout << "YES" << endl;
		cout << x << " " << z << " " << z << endl;
	}
	else if (y == z && y > x) {
		cout << "YES" << endl;
		cout << x << " " << x << " " << y << endl; 
	}
	else if (x == z && x > y) {
		cout << "YES" << endl;
		cout << y << " " << x << " " << y << endl;
	}
	else if (x == y && x == z) {
		cout << "YES" << endl;
		cout << x << " " << y << " " << z << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
int main() {
	int t;
	cin >> t;
	for (t; t > 0; t--) {
		solver();
	}
}