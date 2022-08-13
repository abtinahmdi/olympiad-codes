#include<bits/stdc++.h>
using namespace std;
char b[2][2];
bool check = false;
int main()
{
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			cin >> b[i][j];
			if(b[i][j] == '#'){
				if(b[i + 1][j] == '#' && b[i][j + 1] == '#')
					check = true; 
			}
		}
	}
	if(check)
		cout << "Yes" << '\n';
	else
		cout << "No" << '\n';
}