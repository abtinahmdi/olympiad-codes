#include<bits/stdc++.h>
using namespace std;

int main()
{
	double bmi , w , h;
	cin >> h >> w;
	h /= 100;
	bmi = w / (h * h);
	cout << bmi << endl;
	return 0;
}