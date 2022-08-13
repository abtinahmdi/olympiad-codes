#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, sum;
double ans;
int main()
{
	cin >> n;
	if(n % 2 == 0){
		for(int i = 0;i <= n / 2;i++){
			sum += i;
			sum *= 2;
			sum -= n / 2;
		}
	}
	else{
		for(int i = 0;i <= n / 2;i++){
			sum += i;
			sum *= 2;
		}
	}
	ans = (double)sum / (n + 1);
	cout << ans << '\n';
}