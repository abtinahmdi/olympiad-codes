#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, x, cnt;
int main()
{
    cin>>n;
    for(int i = 0;i < n;i++){
        cin >> k;
        if(k == x && k != 3) 
			k = 0;
        else if(k != x && k == 3) 
			k -= x;
        if(k == 0) 
			cnt++;
        x = k;
    }
    cout << cnt << '\n';
    return 0;
}