#include<bits/stdc++.h>
using namespace std;
int n, sum;
int main(){
	cin >> n;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum == 1){
		cout << "10" << '\n';
		return 0;
	}
	else{
		cout << sum << '\n';
		return 0;
	}
}
