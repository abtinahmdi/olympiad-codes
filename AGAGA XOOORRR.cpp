#include<bits/stdc++.h>
using namespace std;
int t,n,a[2010];
int main()
{
	cin >> t;
	while(t--){
		int flag = 0; 
		cin >> n;
		for(int i = 1;i <= n;i++){
			cin >> a[i];
			a[i] ^= a[i - 1];
			if(a[i] == 0) 
				flag = i;
		}
		int ans = a[n],flag1 = 0;
		for(int i = 1;i <= flag;i++)
			if(a[i] == ans) 
				flag1=1;
		if(flag1 || flag1 == a[n]) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}