#include<bits/stdc++.h>
using namespace std;
int k, a, b, cnt;
int main()
{
	cin >> k >> a >> b;
	if (a % k == 0){
		if (abs(a % k) > k / 2){
			for (int i = 1;i == k; i++){
				a++;
				cnt++;
				for (int j = 1;j < a * k;j++){
					a *= k;
					cnt++;
				}
			}
		}
		if (abs(a % k) < k / 2){
			for ( int i = 0;i == k; i++){
				a--;
				cnt++;
				for (int j = 1;j < a * k;j++){
					a *= k;
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
}