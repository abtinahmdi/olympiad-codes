#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	string b;
	cin >> b;
	int n = a.size();
	bool hast = true;
	for(int i = 0; i < n; i++){
		if(a[i] != b[n-i-1]){
			hast = false;
			break;
		}
	}
	if(hast){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}