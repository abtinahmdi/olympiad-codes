#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5; 
int n, k, a[N], ans;
int main()
{
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int r = a[k - 1];
	for(int i = 0;i < n;i++){
		if(a[i] >= r && a[i]){
			ans++;
		}
	}
	cout << ans << '\n';
}
