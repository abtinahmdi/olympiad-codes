#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
char arr[N][N];
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (i % 2 == 0){
				arr[i][j] = '#';
			}
			if (i % 4 == 1) {
				if (j < b - 1){
					arr[i][j] = '.';
				}
				else{
					arr[i][j] = '#';
				}
			}
			if (i % 4 == 3){
				if (j > 0){
					arr[i][j] = '.';
				}
				else{
					arr[i][j] = '#';
				}
			}
			cout << arr[i][j];
		}
		cout << endl;	
	}
 
}