#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0;
    int n;
    cin >> n;
    int i = 1;
    while(ans < n){
        ans += i * (i + 1) / 2;
        if(ans<=n)
			i++;
    }
    cout << (i - 1);
}