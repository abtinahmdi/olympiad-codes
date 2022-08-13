#include<iostream>
using namespace std;
long fact(long n) {
   if(n == 0 || n == 1 )
      return 1;
   return n*fact(n-1);
}
int countPermutation(string str) {
   int freq[26] = {0};
   for(int i = 0; i<str.size(); i++) {
      freq[str[i] - 'a']++; 
   }
   int res = fact(str.size()); 
   for(int i = 0; i<26; i++) {
      if(freq[i] > 1)
         res /= fact(freq[i]);
   }
   return res;
}
main(){
   string s;
   cin >> s;
   cout << countPermutation(s);
}