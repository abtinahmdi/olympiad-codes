#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[2<<17];
int n, k;
int main()
{
	cin >> n >> k;
	for(int i = 0;i < n;i++)
        cin >> a[i];
	long long l = 0,r = 1e18 / k;
	while(r - l > 1){
		long mid = (l + r) / 2;
		long cnt = 0;
		for(int i = 0;i < n;i++)
            cnt += mid < a[i] ? mid : a[i];
		if(cnt / k >= mid)
            l = mid;
		else
            r = mid;
	}
	cout << l << endl;
}
