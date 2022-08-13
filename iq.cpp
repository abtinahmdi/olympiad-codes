#include<iostream>
using namespace std;
int n,i,a[3],b,c[3];
int main()
{ cin>>n;
  for(i=1;i<=n;i++)
  {cin>>b; a[b%2]=i; c[b%2]++;}
  if( c[0]==1) cout<<a[0]; else cout<<a[1];
}