#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << n / 2 << "\n";
	while(n > 3){
		cout << 2 << " " ;
		n -= 2;
	}
	cout << n;
}