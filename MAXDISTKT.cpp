#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, x, k;
vector<pair<ll, ll>> arr;
bool cmp(pair<ll ,ll> &a, pair<ll ,ll> &b)
{
    return a.second < b.second;
}
void solve()
{
	cin>>n;
	for(int i=0;i<n;i++){
    	cin>>x;
    	arr.push_back(make_pair(x ,i));
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n ; i++){
        if(arr[i].first>k){
            arr[i].first = k;
            k++;
        }
        else if(arr[i].first == k){
            arr[i].first = k;
        }
    }
    sort(arr.begin(), arr.end(), cmp);
    for(int i=0;i<n;i++){
        cout<< arr[i].first<<" ";
    }
    cout<<endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}