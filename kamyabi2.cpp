#include<bits/stdc++.h>
using namespace std;
int k, a, b, cnt;
int main()
{
	cin >> k >> a >> b;
	if (a % k == 0 && b % k == 0)
		for (int i = a * k;i < b;i++)
			cnt++;
	if (a % k != 0){
		a--;
		if (a % k == 0){
			int x = a * k;
			while (x < b)
				cnt++;
			if (b % k == 0){
				x++;
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}