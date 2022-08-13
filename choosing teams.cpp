#include <iostream>
using namespace std;
int main()
{
	int n, k, num=0, c;
	cin >> n >> k;
	for(int a = 0;a < n; a++){
		cin >> c;
		if(5 - c >= k)
			num++;
	}
	cout << num / 3;
}