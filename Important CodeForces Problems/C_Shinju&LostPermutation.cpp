//https://codeforces.com/contest/1658/submission/151288132
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

void solve()
{
    int n; cin >> n;
    int a[n];
    in(a);
    int m = *max_element(a, a + n);
    int ind = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[(i + 1) % n]) {
            if ((a[(i + 1) % n] - a[i]) > 1) {cout << "NO" << endl; return;}
        }
    }
    // dbg(m);
    if (m == n) {

        for (int i = 0; i < n; i++) {
            if (a[i] == m) {break; ind = i;}
        }
        // dbg(ind);
        if (ind != -1) {
            for (int x = 0; x < ind; x++) {
                if (x + 1 < ind && a[x] + 1 != a[x + 1]) {
                    // dbg(x);
                    cout << "NO" << endl; return;
                }
            }
            for (int x = ind; x < n - 1; x++) {
                if (a[x] + 1 != a[x + 1]) {
                    // dbg(a[x]);
                    cout << "NO" << endl; return;
                }
            }

        }

        // cout << "YES" << endl;
        //Check for 1 2 3 4 5 6 pattern.
    }
    int cnt = 0;
    ind = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            ind = i;
            cnt++;
        }
    }
    // dbg(cnt);
    if (cnt == 0 || cnt > 1) {cout << "NO" << endl; return;}
    else {
        if (n > 1 && a[(ind + n + 1) % n] != 2) {cout << "NO" << endl; return;}
        // cout << "YES" << endl;
    }
    cout << "YES" << endl;



}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
//Rated 1700.Upsolved.
