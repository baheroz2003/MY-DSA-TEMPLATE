//https://codeforces.com/contest/1613/problem/C
//<---------------------Kamlesh Singh Bisht--------------------->
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
#define dbg(x) cout<<#x<<"->"<<x<<endl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl;
using namespace std;
//<---------------------------------Road To Pupil-------------------------------->
bool possible(int a[], int n, int k, int h)
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += min(k, a[i + 1] - a[i]);
    }
    sum += k;
    if (sum < h)return 0;
    return 1;
}

void solve()
{
    int n, sum; cin >> n >> sum;
    int a[n]; for (int i = 0; i < n; i++)cin >> a[i];
    int l = 0, h = 1e18, mid, ans;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        if (possible(a, n, mid, sum)) {
            ans = mid;
            h = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
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
 
