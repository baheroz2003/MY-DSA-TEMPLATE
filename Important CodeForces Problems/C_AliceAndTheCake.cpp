//https://codeforces.com/contest/1654/problem/C
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
    map<int, int> mp;
    int a[n]; in(a);
    sort(a, a + n);
    int sum = accumulate(a, a + n, 0ll);
    // dbg(sum);
    for (int i : a) {
        mp[i]++;
    }
    vector<int> q;
    int ptr = 0;
    q.pb(sum);
    while (ptr <= (2 * n)) {
        int val = q[ptr];
        // ebg(val, ptr);
        if (mp[val] > 0) {
            mp[val]--;
            ptr++;
        }
        else {
            int c = (val - 1) / 2 + 1;
            int f = val / 2;
            q.pb(c);
            q.pb(f);
            ptr++;
        }
        if (val < 1)break;
    }
    if (mp[sum] > 0)mp[sum] = 0;
    for (auto i : mp) {
        if (i.s > 0) {cout << "NO" << endl; return;}
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

 
