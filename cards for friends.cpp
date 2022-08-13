#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	cin >> t;
	while(t--){
		int w, h, n;
		cin >> w >> h >> n;
		int w2 = w & (~(w - 1));
		int h2 = h & (~(h - 1));
		if(w2 * h2 >= n)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
