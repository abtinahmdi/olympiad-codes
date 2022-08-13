#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 5;     
int n, m, x, arr[N];
int main()
{
	cin >> n >> m;
    for(int i = 1; i <= n; i++){
    	cin >> x;
    	arr[x]++;
    }
    for(int i = 1; i <= m; i++){
    	cin >> x;
    	arr[x]++;
    }
    for(int i = 1; i <= 1e3; i++){
    	if(arr[i] == 1)
			cout << i << " ";
    }
	cout<<endl;
}