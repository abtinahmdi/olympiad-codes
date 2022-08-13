#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, x, y, a[N];
int main()
{
	cin >> n;
	for(int i = 0 ;i < n;i++)
		cin >> a[i];
	if(is_sorted(a, a + n)){
		cout << "yes" << '\n' << 1 << " " << 1 << '\n';
		return 0;
	}
	int d = 1;
	for(int i = 1;i < n;i++){
		if(a[x] < a[i] && d == 1)
			x = i;
		else if(a[x]>a[i]){
			d = 0;
			y = i;
		}
	}
	reverse(a + x, a + y + 1);
	if(is_sorted(a, a + n))
		cout << "yes" << '\n' << x + 1 << " " << y + 1 << '\n';
	else
		cout << "no" << '\n';	
	return 0;
}