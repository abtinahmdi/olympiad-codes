#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5 + 5;
ll a[N];
ll b[N];
int main()
{
	ll n , x = 0 , y = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++){
		if (x % 2 == 0){
			if (a[i + 1] < a[i]){
				b[i] = 1;
				y++;
			}
			else
				b[i] = 0;
		}
		if (x % 2 == 1){
			if (a[i + 1] > a[i]){
				b[i] = 1;
				y++;
			}
			else
				b[i] = 0;
		}
		if (y == 1)
			x++;
		y = 0;
	}
	if (x % 2 == 1)
		b[n - 1] = 1;
	else
		b[n - 1] = 0;
	for (int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
}
