#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll y, w, mx;
int main()
{
	cin >> y >> w;
	mx = max(y, w);
	ll d = 6 - mx + 1;
	if(d == 1){
		cout << "1/6" << '\n';
	}
	else if(d == 2){
		cout << "1/3" << '\n';
	}
	else if(d== 3){
		cout << "1/2" << '\n';
	}
	else if(d == 4){
		cout << "2/3" << '\n'; 
	}
	else if(d == 5){
		cout << "5/6" << '\n';
	}
	else{
		cout << "1/1" << '\n';
	}
	return 0;
}