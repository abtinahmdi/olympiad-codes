#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, binaryNum[32], i;
ll binaryToDec(ll n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
ll decToBinary(ll x)
{
	while (x > 0) {
        binaryNum[i] = x % 2;
        x = x / 2;
        i++;
    }
    for (ll j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main()
{
	cin >> n;
	ll x = binaryToDec(n);
	ll y = x * 17;
	ll z = decToBinary(y);
}