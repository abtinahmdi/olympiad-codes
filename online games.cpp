#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a, b, k, m, arr[N];
map<int,int> m;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		m[a]++;
		m[a+b]--;
	}
	for(auto i:m){
		arr[k] += i.first - m;
		k += i.second;
		m = i.first;
	}
	for(int i = 1;i <= n;++i)
		cout << arr[i];
	return 0;
}