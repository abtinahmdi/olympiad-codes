#include<bits/stdc++.h>
using namespace std ;
vector<string> v;
int main()
{
    string s ;
	cin >> s ;
    int k ;
	cin >> k ;
    sort(s.begin() , s.end());
    do { 
		v.push_back(s);
	} while(next_permutation(s.begin() , s.end()));
    cout << v[k-1] << endl;
}