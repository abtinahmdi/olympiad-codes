#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p,s,t;
	for(cin>>t;t--;)
	{
		cin>>n;
		for(p=1,s=0;p<=n;s++)
		{
			p=p/(p%10)*(p%10+1);
			if(p%10==0)p++;
		}
		cout<<s<<endl;
	}
}