#include <iostream>
using namespace std;
 
int a, b;
 
int main() 
{
	cin >> a;
	while(cin >> a >> b)
		cout << b % max(a, b/2+1) << endl;
}