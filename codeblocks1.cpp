#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N], x[N];
void print(int nu[],int x[])
{
	cout << "{";
    for(int i = 0;i < n;i++)
        if(x[i] == 1)
            cout << nu[i] << ',';
    cout << "}" << '\n';
}
void zir(int a[],int n)
{
    if(!n){
		print(a,x);
		return;
	}
    x[n - 1] = 0;
    zir(a,n - 1);
    x[n - 1] = 1;
    zir(a,n - 1);
}
int main()
{
    cin >> n ;
    for(int i = 1 ; i <= n ; i++)
        a[i - 1] = i;
	zir(a,n);
    return 0;
}
