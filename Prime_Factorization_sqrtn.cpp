//Standard -Efficient Algorithm to computer Prime Factors of a number in sqrt(n).
//It can also be one in Log(n) using Sieve of Eratosthenes.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    //this map stores the number of times a prime factor divides n.
    //not required if we just want all the prime factors,not their count.
      for (int i = 2; i*i <= sqrt(n); i = i++)
      {
          // While i divides n, increase divisor count and divide n
          while (n % i == 0)
          {
              n = n/i;
              mp[i]++;
          }
      }

    if(n>1)mp[n]++;
    //if the element left is not 1, then it must be a prime factor of n,greater than n.count that in. as well.
    //Prime Factorize 28 using the above method for better understanding .
    
  
    return 0;
}
