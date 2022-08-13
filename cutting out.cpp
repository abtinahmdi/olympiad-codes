#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
int n, k, t, num, f[N];
int check(int x)
{
    int ans = 0;
    for(int i = 1;i <= N;i++) 
		ans += f[i] / x;
    return ans >= k;
}
int main()
{
	cin >> n >> k;
    for(int i=1;i<=n;i++){
		cin >> t;
		f[t]++;
    }
    int l = 1, r = n, mid, ans;
    while(l <= r){
		mid = (l + r) / 2;
		if(check(mid)){
		    l = mid + 1;
		    ans = mid;
		}
		else 
			r = mid - 1;
    }
    for(int i=1;i<=N;i++)
		for(int j = 1;j <= f[i] / ans;j++){
	    	if(num >= k) 
				continue;
		    num++;
			cout << i << " ";
		}
	return 0;
}
