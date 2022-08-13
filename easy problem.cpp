#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s="EASY";
	cin>>n;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		if(a==1){
			s="HARD";
		}
	} 
	cout<<s;
}
