#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
double a[N];
int n;
double b;
int ans;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> b;
	for (int i = 0; i < n; i++){
		if (a[i] == b){
			ans++;
		}
	}
	cout << ans << endl;
}