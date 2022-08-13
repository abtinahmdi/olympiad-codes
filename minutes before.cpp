#include<bits/stdc++.h>
using namespace std;
int n;
int h, m;
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> h >> m;
		int x = 23 - h;
		int y = 60 - m;
		if (23 - h == 0)
			cout << y << '\n';
		else
			cout << (x * 60) + y << '\n';
	}
	return 0;
}