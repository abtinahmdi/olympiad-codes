#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++){
    	if(num % i == 0){
        	flag = false;
        	break;
       }
    }
    return flag;
}
int main(){
	int num;
	bool flag;
	cin>>num;
	flag = isPrime(num);
	if (flag==true)
		cout<<"1" ;
	else
    	cout<<"0";
	return 0;
}