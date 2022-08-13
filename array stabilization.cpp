#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int t, n, k, now, res, a[N];
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
void solve()
{
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin>>a[i];
	}
	int x = gcd(n, k);
	for(int i=0;i<x;i++){
		for(int j = 0;j < n / x * 3;j++, i = i + k,i = i % n){
			if(a[i]==1)
				now++;
			else
				now = 0;
			res = max(res, now);
		}
		if(now == n / x * 3){
			res = -1;
			break;
		}
	}
	cout<<res<<endl;
}