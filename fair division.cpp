#include <bits/stdc++.h>
using namespace std;
long long i,j,k,l,m,n,x,y,t;
int main()
{
	cin >> t;
	while(t > 0){
		t = t - 1;
		cin >> n;
		x = 0;
		y = 0;
		for(int i = 0;i < n;i++){
			cin >> j;
			if(j == 1)
				y = y + 1;
			else 
				x = x + 1;
		}
		m = y / 2;
		if((y % 2 == 1)||(x % 2 == 1 && y == 0))
			cout << "NO" << endl;
		else 
			cout << "YES" <<endl;
	}
	return 0;
}
