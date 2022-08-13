#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char c[N];
string s;
int main()
{       
    getline(cin,s);
    int ans=0;
    int y=0;
    int p=s.size();
    for(int i=1;i<p;i+=3){
        if(s[1]!='}'){
          c[y]=s[i];
          y++;
        }
    }
    for(int i=0;i<y;i++){
        int r=0;
        for(int j=0;j<i;j++){
            if(c[i]==c[j])
                r=1;
        }
        if(r==0)
            ans++;
    }
   cout << ans; 
}
