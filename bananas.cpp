#include<bits/stdc++.h>
using namespace std;
int k, n, w, gharz, sum;
int main()
{
	cin >> k >> n >> w;
	for (int i = 1; i <= w ; i++){
		sum += i;
	}
	gharz = (sum * k) - n;
	if (gharz > 0){
		cout << gharz << endl;
	}
	if (gharz <= 0){
		cout << "0" << endl;
	}
	return 0;
}