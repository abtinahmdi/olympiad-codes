#include<bits/stdc++.h>
using namespace std;
void solver()
{
	long long n;
	bool haseven = false;
	bool hasodd = false;
	cin  >> n;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		if (tmp % 2)
			hasodd = true;
		else
			haseven = true;
	}
	if (hasodd && n % 2){
		cout << "YES" << endl;
		return;
	}
	if (haseven && hasodd){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
 
}
 
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		solver();
	}
}