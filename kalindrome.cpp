#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2 * 1e5;
ll t, n, a[N];
void solve()
{
		cin >> n;
		for(int i = 0;i < n;i++){
	    	cin >> a[i];
		}
		long long l = 0, r = n - 1;
		while(l < r){
	    	if(a[l] != a[r])
	    	    break;
	    	l++;
	    	r--;
		} 
		if(l <= r){
	    	cout << "YES" << '\n';
	    	return;
		}
		long long s = l,k = r;
		long long x = a[l], y = a[r];
		while(l<r){
			if(a[l]!=a[r] && a[l]==x)
				l++;
    		else if(a[l]!=a[r] && a[r]==x)
    			r--;
    		else if(!(a[l]==a[r]))
    			break;
	    	else{
				l++;
	    		r--;
			}
		}
		if(r<=l){
	    	cout << "YES" << '\n';
	    	return;
		}
		l = s, r = k;
		while(l<r){
	    	if(a[l]!=a[r] && a[l]==y)
				l++;
			else if(a[l]!=a[r] && a[r]==y)
				r--;
    		else if(!(a[l]==a[r])){
    			cout<<"NO" << '\n';
    			return;
    		}
    		else{
    			l++;
    			r--;
    		}
		}
		cout<<"YES";
		cout << '\n';
	}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}