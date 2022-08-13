#include<bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
	cin >> n >> m;
	cout << min(n, min(m, (n + m) / 3));
}