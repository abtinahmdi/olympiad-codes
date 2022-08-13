#include<iostream>
using namespace std;
int a,b,c,x,y=100,n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a>x) 
			x=a,b=i;
		if(y>=a) 
			y=a,c=i;
	}
	cout<<b-1+(n-c)-((b>c)?1:0);
}