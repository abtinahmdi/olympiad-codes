#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
vector<ll> v;
ll t, n, w, a[N], x, sum, cnt;
void solve() 
{
	cin >> n >> w;
    for(int i = 0;i < n;i++){
		cin >> a[i];
    }
    if(w % 2)
        x = w / 2;
    if(w % 2 != 0)
        x = w / 2 + 1;
    for(int i = 0;i < n;i++){
        if(a[i] >= x && a[i] <= w){
            cnt = 1;
            cout << "1\n" << i + 1 << "\n";
            break;
        }
        if(a[i] < x){
            v.push_back(i + 1);
            sum = sum + a[i];
            if(sum >= x && sum <= w){
                cnt = 2;
                break;
            }
        }
	}
    if(cnt != 2){
        cout << "-1\n";
    }
    cout << v.size() << "\n";
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}