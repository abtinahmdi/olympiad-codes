#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--){
	    int n;
	    cin>>n;
	    ll arr[n], sum = 0;
	    set<ll> st;
	    st.insert({2, 4, 8 ,16});
	    ll count = 0;
	    for (int i = 0; i < n; ++i){
	        cin>>arr[i];
	        while(arr[i] % 2 == 0){
	            count++;
	            arr[i] /= 2;
	        }
	    }
	    sort(arr,arr+ n);
	    while(count--){
	        arr[n-1] *= 2;
	    }
	    for (int i = 0; i < n; ++i) sum += arr[i];
	    cout << sum << '\n';
	}
}