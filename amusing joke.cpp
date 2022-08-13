#include <iostream>
using namespace std;
int main()
{
    string s,c,a;
    cin >> s >> c >> a;
    int x = 0;
    int y = 0;
    int cnt = 0;
    for(int i=0;i<a.size(); i++){
        for(int j=0;j<a.size(); j++){
            if(a[i]<a[j])
                swap(a[i],a[j]);
        }
    }
    s = s + c;
    for(int i=0;i<s.size(); i++){
        for(int j=0;j<s.size(); j++){
            if(s[i]<s[j])
                swap(s[i],s[j]);
        }
    }
    if(s==a)
        cout <<"YES";
    else
        cout << "NO";
}