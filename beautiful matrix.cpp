#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,c=-1;
    while(i!=1){
		cin>>i;
		c++;
	}
    cout<<abs(c/5-2)+abs(c%5-2);
}