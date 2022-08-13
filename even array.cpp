#include<bits/stdc++.h>
using namespace std;
int t,n,a,x,y;
int main()
{
	cin>>t;
	while (t--){
		cin>>n;
		x=y=0;
		for ( int i = 0; i < n ; ++i){
			cin>>a;
			(i&1?x:y)+=(i^a)&1;
		}
		cout<<(x-y?-1:x)<<endl;
	}
}