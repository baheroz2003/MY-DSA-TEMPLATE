                      //https://codeforces.com/problemset/problem/1612/C

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
#define in(a) for(auto &i:a)cin>>i
#define out(a)for(auto i:a)cout<<i<<" ";cout<<endl
#define dbg(x) cout<<#x<<"->"<<x<<endl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl;
using namespace std;

void chat() {
    int k, x; cin >> k >> x;
    int l = 1, h = k, ans = -1;
    ans = 2 * k - 1;
    int sum, mid;

    while (l <= h) {
        mid = (h - l) / 2 + l;
        sum = (mid * (mid + 1)) / 2;

        if (sum < x) {
            l = mid + 1;

        }
        else if (sum > x) {
            h = mid - 1;
            ans = mid;
        }
        else {
            ans = mid; break;
        }
    }

    if (ans == ((2 * k) - 1)) {
        sum = (k * (k - 1)) / 2;
        l = k - 1; h = 1;
        int get = x - ((k * (k + 1)) / 2);

        while (l >= h) {

            mid = (l - h) / 2 + h;

            int have = sum - (mid * (mid - 1)) / 2;
            if (have == get) {

                ans = 2 * k - mid;
                break;
            }
            else if (have < get) {
                l = mid - 1;
            }
            else {
                ans = 2 * k - mid;
                h = mid + 1;
            }
        }
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

        chat();
    }

    return 0;
}

//1300-Binary Search \ Math

 
