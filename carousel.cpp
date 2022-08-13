#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, n;
vector<int> v(N);
void solve()
{
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    if(count(v.begin(), v.end(), v[0]) == n){
        cout << "1" << '\n';
        while(n--){
            cout << "1" << " " << '\n';
        }
    }
    if(n % 2 == 0){
        cout << "2" << '\n';
        for(int i = 0;i < n;i++){
            if(i % 2 == 0)
                cout << "1" << " ";
            else
                cout << "2" << " ";
        }
    }
}
int main()
{
    cin >> t;
    while(t--){
        solve();
    }
}
