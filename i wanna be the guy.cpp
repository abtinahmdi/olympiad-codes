#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int n, p, q, a[N], tmp;
int main()
{
	cin >> n;
	cin >> p;
	for (int i = 0; i < p; i++){
		cin >> tmp;
		a[tmp - 1] = true;
	}
	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> tmp;
		a[tmp - 1] = true;
	}
	for (int i = 0; i < n; i++){
		if (a[i] == 0){
			cout << "Oh, my keyboard!";
			exit(0);
		}
	}
	cout << "I become the guy.";
}