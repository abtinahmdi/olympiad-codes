#include<bits/stdc++.h>
using namespace std;
int a, b, cnt;
int main()
{
	cin >> a >> b;
	for (int i = 0;a < b;i++){
		if(b % 2){
			b++;
			cnt++;
		}
		b /= 2;
		cnt++;
	}
	cnt += a-b;
	cout << cnt << '\n';
	return 0;
}
