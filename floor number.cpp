#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		int c=1;
		n-=2;
		if(n>0)	
		c += (n+x-1)/x;
		cout<<c<<endl;
	}
}