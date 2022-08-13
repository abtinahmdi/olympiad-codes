#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,i;cin>>k>>r;
	for(i = 1;i * k % 10 != 0 && i * k %10 != r; i++){}
	cout<<i;
}