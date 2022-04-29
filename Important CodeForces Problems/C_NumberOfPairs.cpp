//https://codeforces.com/contest/1538/problem/C
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
void nop() {

    int n; cin >> n;
    int l, r; cin >> l >> r;
    vi a(n);
    in(a);
    // out(a);
    sort(a.begin(), a.end());
    int i = 0, j = n - 1, ans = 0;

    for (int i = 0; i < n - 1; i++) {
        int target1, target2;
        target1 = r - a[i];
        target2 = l - a[i];

        // ebg(target1, target2);
        auto it = upper_bound(a.begin() + i + 1, a.end(), target1);
        // dbg(*it);
        int index1, index2;
        if (it == a.end())index1 = n - 1;
        else index1 = it - (a.begin() + 1);

        auto it2 = lower_bound(a.begin() + i + 1, a.end(), target2);
        // dbg(*it2);
        if (it2 == a.end())index2 = index1 + 1;
        else index2 = it2 - (a.begin());

        // ebg(index1, index2);

        ans += index1 - index2 + 1;
    }
    cout << ans << endl;

}

void solve() {

}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        nop();
    }

    return 0;
}

 
