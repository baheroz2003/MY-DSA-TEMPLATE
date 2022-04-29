//https://codeforces.com/contest/1656/problem/C

/*  <---------------------Kamlesh Singh Bisht---------------------> */
#include <bits/stdc++.h>
#define f first
#define endl '\n'
#define s second
#define pb push_back
#define md 998244353
#define int long long
#define vi vector<int>
#define mod 1000000007
#define pi pair<int,int>
#define in(a) for(int &i:a)cin>>i
#define out(a)for(int i:a)cout<<i<<" ";cout<<endl
#define dbg(x) cout<<#x<<"->"<<x<<endl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl;
using namespace std;

void c() {
    int n; cin >> n;
    int a[n]; in(a);
    sort(a, a + n);
    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1)ok = false;
    }
    if (!ok) {
        for (int i = 0; i < n - 1; i++) {
            if (a[i] + 1 == a[i + 1]) {cout << "NO" << endl; return;}
        }
        cout << "YES" << endl;
    }
    else cout << "YES" << endl;

}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        c();
    }

    return 0;
}
 
