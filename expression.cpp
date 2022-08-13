#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cin >> a >> b >> c;
	int x = (a + b) * c;
	int z = (b + c) * a;
	int h = a * b * c;
	int v = a + b + c;
	max = x;
	if(z > max)
		max = z;
	if(h > max)
		max = h;
	if( v > max)
		max = v;
	cout << max <<endl;
}