#include <iostream>
using namespace std;
const int N = 1e5 + 10;
long long ans;
long long a[N], x, n;
long long sum;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ ){
		cin >> a[i];
		sum += a[i];
	}
	cin >> x;
	x++ ;
	ans = x / sum * n;
	x = x % sum;
	for (int i = 1; i <= n; i++){
		if (x > 0){
			ans ++ ;
			x -= a[i];
		}
		else{
			cout << ans << endl;
			return 0;
		}
	}
	cout << ans;
	return 0;
}