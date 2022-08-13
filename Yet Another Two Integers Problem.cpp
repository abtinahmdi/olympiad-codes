#include<iostream>
using namespace std;
int main()
{
	int n, a, b, max, x, min;
	cin >> n;
	for(int i = 0 ; i < n ; i ++)
	{
		cin >> a >> b;
		if(a==b){
			cout << 0 << endl;
		}
		else if(a > b&& (a-b)%10>0){
			x = (a - b) / 10 + 1;
			cout << x << endl;
		}
		else if (b>a && (b-a)%10>0){
			x=(b-a)/10+1;
			cout << x << endl;
		}
		else if (b>a && (b-a)%10==0){
			x=(b-a)/10;
			cout << x << endl;
		}
		else if (a>b && (a-b)%10==0){
		x=(a-b)/10;
		cout << x << endl;
		}
	}
}