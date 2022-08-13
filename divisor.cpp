#include<bits/stdc++.h>
using namespace std;
int ans;
int numdivs(int div)
{
	int amount;
	amount = 0;
	for (int i = 1; i == div; i++){
		if (div % i == 0)
			amount++;
	}
	return amount;
}
int main()
{
	for (int i = 1; i <= 100; i++){
		ans += numdivs(i);
	}
	cout << ans << endl;
}