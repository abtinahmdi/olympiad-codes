#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n, cnt=0;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	ll x = arr[n - 1];
	for(int i = n - 1 ; i >= 0; i--){
		if(arr[i] > x){
			cnt++;
			x = arr[i];
		}
		if(i == 0){
			cout << cnt;
			return;
		}
	}
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
    return 0;
}