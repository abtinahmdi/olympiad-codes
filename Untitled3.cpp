#include <iostream>
using namespace std;
 
int main () {
      int a , b , c , d , n , s = 0;
      cin>>a>>b>>c>>d>>n;
      for (int i=1;i<=n;i++)
            if(i%a && i%b && i%c && i%d)
                  s++;
      cout<<n - s << endl;      
}
