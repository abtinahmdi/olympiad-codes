#include<iostream>
using namespace std;
const long long N = 1e6 + 7;
long long mem[N];
unsigned long long fib(unsigned long long n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	if (!mem[n - 1])
		mem[n - 1] = fib(n - 1);
	if (!mem[n - 2])
		mem[n - 2] = fib(n - 2);	
	return mem[n - 1] + mem[n - 2];
}
int main()
{
	unsigned long long n;
	cin >> n;
	mem[1] = mem[2] = 1;
	cout << fib(n);
}
