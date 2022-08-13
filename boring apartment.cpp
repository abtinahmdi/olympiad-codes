#include<iostream>
using namespace std;
int main()
{
		
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		int ans = ((x % 10) - 1) * 10 + 1;
		if (x > 10)
			ans += 2;
		if (x > 100)
			ans += 3;
		if (x > 1000)
			ans += 4;
		cout << ans << endl;
	}
	return 0;
}
