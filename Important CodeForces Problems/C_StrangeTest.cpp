//https://codeforces.com/contest/1632/problem/C
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
#define in(a) for(int &i:a)cin>>i
#define out(a)for(int i:a)cout<<i<<" ";cout<<endl
#define dbg(x) cout<<#x<<"->"<<x<<endl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl;
using namespace std;
///My Failed SOlution
void strangetest()
{
    int a, b; cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    int num = 0, i = 0, x = 0;

    while (i < 32) {
        num = (1 << i);
        if ((a & num ) && !(b & num)) {
            cnt1 = cnt1 | num;
        }
        else if (num < a && !(a & num) && (b & num)) {
            cnt2 = cnt2 | num;
        }
        i++;
    }
    // ebg(cnt1, cnt2);
    int ans = 0, ta = a;
    while (ta < b && cnt1 > 0) {
        ans++;
        if ((ta | b) == b)break;
        ta++;
    }

    if (!ans)ans = INT_MAX;

    if (cnt1 == 0)ans = min({ans, b - a, 1ll});

    else if (cnt1 > cnt2)
        ans = min({b - a, cnt1 - cnt2 + 1, ans});

    else if (cnt1 != cnt2)ans = min({ans, b - a, cnt2 - cnt1 + 1});

    cout << ans << endl;

}
//EDitorialist's SOlution.
void solve()
{
    int a, b; cin >> a >> b;
    int ans = b - a;
    for (int i = 0; i < b - a; i++) {
        if (((a + i) | b) == b) {
            ans = min(ans, i + 1);
            break;
        }
    }
    int i = 0;
    while (1) {
        if ((a | (b + i)) == (b + i)) {ans = min(ans, i + 1); break;}
        i++;
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

//Rated 1600-
