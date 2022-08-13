#include<bits/stdc++.h>
using namespace std;
const int N = 27;
int n, a[N], c, bi, ba, mx;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		if(i % 3 == 0){
			c += a[i];
		}
		if(i % 3 == 1){
			bi += a[i];
		}
		if(i % 3 == 2){
			ba += a[i];
		}
	}
	mx = max({c, bi, ba});
	if(mx == c){
		cout << "chest" << '\n';
	}
	else if(mx == bi){
		cout << "biceps" << '\n';
	}
	else{
		cout << "back" << '\n';
	}
	return 0;
}