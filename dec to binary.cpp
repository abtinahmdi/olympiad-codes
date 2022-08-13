#include<bits/stdc++.h>
using namespace std;
int binaryNum[32], i;
void decToBinary(int n)
{
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main()
{
	int n;
	cin >> n;
    decToBinary(n);
    return 0;
}