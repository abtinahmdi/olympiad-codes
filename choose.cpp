#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	int factoriel = 1;
	for (int i = 1; i <= n; i++){
		factoriel *= i;
	}
	return factoriel;
}
int choose(int r, int n)
{
	long long x = fact(r) / (fact(n) * fact(r - n));
	return x;
}
int main()
{
	int r, n;
	cin >> r >> n;
	cout << choose(r, n);
}
