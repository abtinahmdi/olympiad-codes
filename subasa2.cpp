#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
int a[N];


int solver(int x, int n){
 int s = 0;
 int l = 0;
 for (int i = 0; i < x; i++){
  l = max(l , a[i]);
 }
 for (int i = x + 1; i < n; i++){
  if (i == x + 1){
   s = a[i];
  }
  else {
   s = min(s , a[i]);
  }
 }
 if (l >= a[x]){
  return 2;
 }
 else if(s < a[x]){
  return 1;
 }
  
 
 
 
 
}
int main()
{
 int n, A, B;
 cin >> n >> A >> B;
 for (int i = 0; i < n; i++){
  cin >> a[i];
 }
 int max = 0;
 bool res = true;
 for (int i = 0; i < n; i++){
  if (i != n - 1 && a[i] > 45 + A && a[i + 1] < a[i]){
   res = false;
  }
  if (a[i] > 90 + B){
   res = false; 
  }
  
  

 }
 if (res){
  cout << "YES";
 }
 else{
  cout << "NO";
 }
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}