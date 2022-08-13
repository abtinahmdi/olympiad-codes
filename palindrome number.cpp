#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pal(int num){
	int rev = 0,val;
	val = num;
	while(num > 0) {
    	rev = rev * 10 + num % 10;
    	num = num / 10;
	}
	if(val == rev)
		cout<<val<<" is a palindrome"<<endl;
	else
		cout<<val<<" is not a palindrome"<<endl;
}
int main() 
{
   int num;
   cin >> num;
   cout << pal(num) << endl;
   return 0;
}