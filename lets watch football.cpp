#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
	cin >> a >> b >> c;
	cout << (((a - b) * c - 1)) / b + 1;
}