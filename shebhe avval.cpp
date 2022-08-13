#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 5;
int t, a[N], b[N];
void coutt(int arr[],int x[])
{
	cout << "{" ;
	
	for(int i = 0;i < t;i++)
        if(x[i] == 1)
			cout << arr[i] << ",";
        
    cout << "}" << endl;
}
void subs(int a[],int t)
{
	if(!t)
		coutt(a, b);
		return;
	b[t - 1] = 0;
    subs(a, t - 1);
    b[t - 1] = 1;
    subs(a, t - 1);
}

int main()
{
    cin >> t;
    for(int i = t ; i >= 1 ; i--)
        a[i - 1] = i;
	subs(a, t);
    return 0;
}