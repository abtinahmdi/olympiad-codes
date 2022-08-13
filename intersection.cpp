#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int l = 0, h = 1001;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		l = max(l, a);
	}
	for(int i = 0; i < n; ++i){
		int b;
		cin >> b;
		h = min(h, b);
	}
	cout << max(0, h - l + 1) << endl;
	return 0;
}