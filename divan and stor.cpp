#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1e5 + 5;
void solve()
{
	ll n , r , k , l , sum=0 , ans=0;
    cin >> n >> l >> r >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> arr[i];
    }
    sort(arr , arr + n);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= l && arr[i] <= r)
        {
            sum += arr[i];
            if(sum <= k)
                ans++;
            else
                break;
        }
    }
	cout << ans;
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