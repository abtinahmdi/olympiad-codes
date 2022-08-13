#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;
ll t, l1, l2, l3;
void solve()
{
	cin>>l1>>l2>>l3;
	ll mx = max(l1, l2);
	mx = max(mx, l3);
	bool trust = false;
	ll mi;
	if(l2 == l1 || l3 == l2 || l1==l3){
		trust=true;
		if(l3==l2){
			mi=l1;
		}
		else if(l1==l2){
			mi=l3;
		}
		else{
			mi=l2;
		}
	}
	if(trust){
		if(l1 + l2 == l3 || l3 + l2 == l1||l1 + l3 == l2 || mi % 2 == 0){
			yes;
			return;
		}
	}
	if(l1+l2+l3==2*mx){
		yes;
		return;
	}
	else{
		no;
		return;
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}