#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long t, x1, p1, x2, p2;
void solve()
{
	long double x1,p1,x2,p2;
    cin >> x1 >> p1 >> x2 >> p2 ;
    if(p1 == p2){
    	p1 = 0;
    	p2 = 0;
    }
    else if(p1 > p2){
    	p1 = p1 - p2;
    	p2 = 0;
    }
    else{
		p2 = p2 - p1;
    	p1 = 0;
    }
    x1 = x1 * pow(10, p1);
    x2 = x2 * pow(10, p2);
    if(x1<x2)
    	cout << "<\n";
    else if(x1>x2)
    	cout << ">\n";
	else
    	cout << "=\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t;
    cin >> t;
    while(t--){
		solve();
	}
}