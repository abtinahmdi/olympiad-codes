#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
int main()
{
	cin >> n;
	int a,b=0;
	for(int i = 0 ; i < n ; i ++){
		cin >> a;
		if(a!=b){
			ans++;
			b=a;
		}	
	}
	cout << ans << endl;
}
 