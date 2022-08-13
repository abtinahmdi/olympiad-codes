#include<iostream>
using namespace std;
inline int m(int x)
{
	if(x<2)
	return 0;
	for(int i= 2 ;i*i <=x ;i++)
		if(x % i ==0)
		return 0;
	return 1;
}
 
int main()
{
	int a , b;
	cin >> a;
for (int i = 0 ; i < a ; i ++)
	{
	cin >> b;
		int x = 1 + b  ;
		int y;
		while( !m (x))
		x++;
		y=x+b;
		while (!m (y))
		
		y++;
		cout<< x * y<<endl;
	}
}
