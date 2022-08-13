#include<iostream>
using namespace std;
const int N = 1e2 + 5;
int A[N],n,i,t;
int main()
{
	cin >> n;
	while(cin >> t){
		A[t]++;
	}
	A[1] = max(A[1] - A[3], 0);
	cout << A[3] + A[4] + ((A[1] + 2 * A[2] + 3) / 4);
}