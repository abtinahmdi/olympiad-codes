#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rowNum;
    cin >> rowNum;
    for (int i = 0; i < rowNum; i++){
        for (int j = 0; j < rowNum - i; j++){
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        for (int j = 0; j < rowNum - i; j++){
        	cout << " ";
		}
        cout << endl;
	}
    for(int i = 0; i < 2 * rowNum + 1; i++){
    	cout << "*";
	}
	cout << endl;
    for (int i = rowNum - 1;i >= 0;i--)
	{
        for (int j = 0; j < rowNum - i; j++){
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        for (int j = 0; j < rowNum - i; j++){
        	cout << " ";
		}
        cout << endl;
    }
}
