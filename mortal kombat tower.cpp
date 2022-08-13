#include<bits/stdc++.h>
using namespace std;
int t, a, b, ans ,tmp;
int main()
{
	cin >> t;
	for (int i = 0;i < t;i++){
		cin >> a >> ans;
		a--;
		for (int j = 0;j < a;j++){
			cin >> b;
			if(b) 
				tmp++;
			else{
				ans = ans + (tmp / 3);
				tmp = 0;
			}
		}
		cout << ans + (tmp / 3)<<"\n";
		tmp=0;
	}
}