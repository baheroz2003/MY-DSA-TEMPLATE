#include <bits/stdc++.h>

//Standard Module Exponentiation (Binary exponentiation + Modulo for given m)
int expo(int a, int b, int m) {
  int res = 1;
  while (b > 0) 
  {
    if (b & 1)
      res = (res * a) % m;
      a = (a * a) % m;
      b = b >> 1;
  } 
  return res;
}
int main(){
  int n,m;
  cin>>n>>m;
  /*
  Multiplicative Module Inverse of n % m will be:
  
              (n^(m-2))%m
  
  This is done using Fermat's Little Theorem.
  */
  //Implementation of Modulo Multipicative Inverse mod m :
  int modinverse=expo(n,m-2,m);        
  cout<<modinverse<<endl;
}
