#include<bits/stdc++.h>
using namespace std;
char a[105];
int main()
{
	int count ;
	string k;
	cin>> k;
	count = 0;
	for ( int i = 0 ; i< k.size() ; i++){
		for ( int t= 0 ; t<i; t++){
				if(k[i]==k[t]){
					count++;
					break;
				}
			}
		}
    if ((k.length()-count) % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
	return 0;
}