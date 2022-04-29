//https://codeforces.com/contest/1627/problem/B

//<---------------------Kamlesh Singh Bisht--------------------->
#include <bits/stdc++.h>
#define sz 8
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
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    vector<int> dist;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int d1 = n - 1, d2 = m - 1;
            int x1 = 0, x2 = 0;
            int y1 = 0, y2 = m - 1;
            int z1 = n - 1, z2 = 0;
            int ans1 = abs(d1 - i) + abs(d2 - j);
            int ans2 = abs(x1 - i) + abs(x2 - j);
            int ans3 = abs(y1 - i) + abs(y2 - j);
            int ans4 = abs(z1 - i) + abs(z2 - j);
            int boss = max({ans1, ans2, ans3, ans4});
            dist.push_back(boss);
        }
    }
    sort(dist.begin(), dist.end());
    for (int i : dist)cout << i << " ";
    cout << endl;


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
//1300-Self Solved DUring Best COntest.
