#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while (t--){
		int n,a,b,c;
		cin>>a>>b>>c;
		n=abs(a-b)*2;
		if (a>n||b>n||c>n) 
			cout<<-1<<endl;
		else 
			cout<<(n/2+c-1)%n+1<<endl;
	}
	return 0;
}