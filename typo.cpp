#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string A, B;
	cin >> A >> B;
	int a=A.length();
	for(int i=0; i<a-1; ++i){
		int j = i+1;
		swap(A[i], A[j]);
		if(A==B){ 
			cout << "Yes\n";
			return 0; 
		}
		swap(A[i], A[j]);
	}
	if(A==B){ cout << "Yes\n"; return 0; }
	cout << "No\n";
	
	return 0;
}