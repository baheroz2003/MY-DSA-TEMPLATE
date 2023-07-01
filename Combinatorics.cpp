#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int expo(int a, int b, int m) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b = b >> 1;} return res;}
int modInv(int a, int m) {return expo(a, m - 2, m);}
int ncr(int n, int r, int m, vector<long long>& fact, vector<long long>& inv) {return (((fact[n] % m * inv[n - r] % m) % m) * (inv[r] % m)) % m;}
int npr(int n, int r, int m, vector<long long>& fact, vector<long long>& inv) {return (((fact[n] % m) * (inv[n - r] % m)) % m);}

int32_t main() {

    int n;
    cin >> n;

    //factorial & inverse factorial vectors
    //can be set globally as well
    vector<long long> fact(n + 1, 1), inv(n + 1, 1);

    for (int i = 1; i <= n; i++) {
        //factorial %1e9+7
        fact[i] = ((fact[i - 1] % mod) * (i % mod)) % mod;

        //inverse factorial %1e9+7
        inv[i] = modInv(fact[i], mod);
    }

    //suppose you want to calculate 5C3 modulo 1e9+7
    int one = ncr(5, 3, mod, fact, inv);

}
