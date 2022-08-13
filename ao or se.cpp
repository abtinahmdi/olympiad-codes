#include<iostream>
using namespace std;
void swapa(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; i ++){
		int a, b;
		cin >> a >> b;
		if(a > b){
			int y = a - b;
			if(y % 2 != 0)
				cout << 2 << endl;
			else if(y % 2 == 0)
				cout << 1 << endl;
		}
		else if(b > a){
			int x = b - a;
			if(x % 2 == 0)
				cout << 2 << endl;
			else if(x % 2 != 0)
				cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}