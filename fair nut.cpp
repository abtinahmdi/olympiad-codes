#include <bits/stdc++.h>
using namespace std;
int n,x,y,s;
int main(){
	for(cin>>n;x<n;x++){
		cin>>y;
		s+=y*n;
	}
	cout<<4*s;
}