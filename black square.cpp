#include<bits/stdc++.h>
using namespace std;
int a[5], i, k;
string s;
int main(){
	cin >> a[1] >> a[2] >> a[3] >> a[4] >> s;
	for(i = 0;i < s.size();i++)
    	k += a[s[i] - 48];
	cout << k;
}