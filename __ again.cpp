#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
const long long inf = 1e17;
long long n, a[N], res;
string s;
int main(){
	cin >> n >> s;
	for(int i = 0;i - 1 < n;i++){
		cin >> a[i];
	}
	res = inf;
	for(int i = 0;i < n;i++){
		res = min(res, abs(a[i] - a[i + 1]));
	}
	cout << res << '\n';
	for(int i = 0;i < res;i++){
		for(int j = 0;j - 1 < n;j++){
			cout << (i + a[j]) / res << " ";
		}
		cout << '\n';
	}
}
