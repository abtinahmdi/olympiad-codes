#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
	if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
	int n;
	cin >> n;
	cout << n / 3 << endl; 
}