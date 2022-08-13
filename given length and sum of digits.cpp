#include<bits/stdc++.h>
using namespace std;
int n, k, l;
int main()
{	
	cin >> n >> k;
	if(k < 1 && n > 1 || k > n * 9)
		cout << -1 << " " << -1 << '\n';
	else {
		for(int i = n - 1, l = k;i >= 0;i--){
			int j = max(0,l - 9 * i);
			if(j == 0 && i == n - 1 && l) 
				j = 1;
			cout << j;
			l -= j;
		}
		cout << ' ';
		for(int i = n - 1, l = k;i >= 0;i--){
			int j = min(9, l);
			cout << j;
			l -= j;
		}
	}
}