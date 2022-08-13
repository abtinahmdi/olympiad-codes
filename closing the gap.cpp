#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e3 + 5;
ll t, n, a[N], sum, j;
void solve(){
	cin>>n;
	ll sum =0;
	for(int i = 0;i < n;i++){
		ll j=0;
		cin>>j;
		sum+=j;
	}
	if(sum%n==0){
		cout<<0;
		return;
	}
	else{
		cout<<1;
		return;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}