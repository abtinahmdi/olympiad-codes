#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n, m, k;
		cin >> n >> m >> k;
		long long ma = (n - 1) * n / 2;
		if(m == ma && k > 2 || m < ma && m >= n - 1 && k > 3|| n == 1 && m == 0 && k >= 2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}