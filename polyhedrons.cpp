#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    string s;
    for(cin>>n;n--;sum+=(s[0]=='T'?4:s[0]=='C'?6:s[0]=='O'?8:s[0]=='D'?12:20))
    {
        cin>>s;
    }
    cout<<sum;
}