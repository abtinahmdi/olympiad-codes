#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll get(string a,string temp)
{
    ll res = 0;
    ll f = a.length();
    string z=temp;
    while(a.length() > 0 && temp.length() > 0) {
        if(a.back() == temp.back())
            temp.pop_back();
		else
            res++;
        a.pop_back();
    }
    if(temp.length()==0)
        return res;
    return f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        if(a.length() < 2)
            cout << a.length() << '\n';
        else
            cout << min({get(a,"00"),get(a,"25"),get(a,"50"),get(a,"75")}) << '\n';
    }
}