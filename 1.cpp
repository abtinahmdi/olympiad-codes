#include<bits/stdc++.h>
using namespace std;

int main()
{
	for (int i = 0;i < 10;i++){
		cout << "NO" << endl;
		if (i % 3 == 0){
			continue;
		}
		cout << i << " " << "YES" << endl;
	}
}