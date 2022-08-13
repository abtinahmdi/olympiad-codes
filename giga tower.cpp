#include<bits/stdc++.h>
using namespace std;
bool h8(int n)
{
	if (n < 0)
		n *= -1;
	while (n > 0){
		if (n % 10 == 8)
			return true;
		n /= 10;
	}
	return false;
}
int main()
{
	long long n;
	int ans = 0;
	cin >> n;
	while(n <= 100000000000000){
		if(h8(n)&&ans!=0)
			break;
		n++;
		ans++;
	}
	cout << ans << endl;
	return 0;
}