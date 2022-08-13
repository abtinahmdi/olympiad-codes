#include<bits/stdc++.h>
using namespace std;
long long i,n,s,t,x,y,a[60],b[60];
int main()
{
	for(cin>>t;t--;){
		cin>>n;
		for(i = 0,x = y = 1000000000;i < n; i++){
			cin >> a[i];
			x = min(x, a[i]);
		}
		for(i = 0;i < n; i++)
		{
			cin >> b[i];
			y = min(y, b[i]);
		}
		for(i = s = 0;i < n; i++)
			s += max(a[i] - x, b[i] - y);
		cout<<s<<endl;
	}
}