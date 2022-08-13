#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if(b==0){
        return a;
    }
    else return gcd(b, a%b) ;
}
void solve()
{
    int n;
    cin>>n; 
    vector<ll> a(n);
    for(ll &i : a) 
		cin>>i ;
    ll d = 0;
    ll gcd1 = a[0];
    ll gcd2 = a[1]; 
    for(int i=2; i<n; i+=2){
		gcd1 = gcd(gcd1, a[i]);
    }
    for(int i=3; i<n; i+=2){
        gcd2 = gcd(gcd2, a[i]);
    }
    ll chk=-1;
    if(gcd1 != 1){
        d = gcd1;
        chk = 1;
        while(chk<n){
            if(a[chk]% gcd1 == 0){
                d = 0 ;
                break;
            }
            chk += 2;
        }
    }
    if(gcd2 != 1 && d == 0){
        d = gcd2;
        chk = 0;
        while(chk<n){
            if(a[chk]% gcd2 == 0){
                d = 0 ;
                break;
            }
            chk += 2;
        }
    }
    cout << d << endl ;
}
int main()
{
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
}