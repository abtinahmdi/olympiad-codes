#include<iostream>
using namespace std;
int main()
{
	long long n,mishka=0,chris=0;
	cin >> n ;
	for (int i = 0 ; i< n ; i ++){
		int a,b;
		cin >> a >> b;
		if (a>b)
			mishka++;
		else if(b>a)
			chris++;	
	}
	if (mishka > chris)
		cout <<"Mishka"<< endl;
	else if (chris > mishka)
		cout <<"Chris"<< endl;
	else if (mishka == chris)
		cout <<"Friendship is magic!^^"<< endl;
}
