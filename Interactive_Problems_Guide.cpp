//Guidelines:
  //1->Use endl. to flush the output. that's why I have disabled the macro (#define endl '\n') above
  //2-> Turn off the fast io (below part) interactive problems
  // ios::sync_with_stdio(false); cin.tie(NULL);
  //3->Read the input.normally. Provide the output. then read again. as Usual.

//THe following code is the solution for the problem:
// https://codeforces.com/contest/1797/problem/C

#include <bits/stdc++.h>
using namespace std;

#define f first
//GuideLine 1 
// #define endl '\n'
#define s second
#define pb push_back
#define md 998244353
#define int long long
#define vi vector<int>
#define mod 1000000007
#define inf 1999999999999999999
#define vp vector<pair<int,int>>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define in(a) for(auto &i:a)cin>>i
#define dbg(x) cout<<#x<<"->"<<x<<endl
#define mem(a,val) memset(a,val,sizeof(a))
#define out(a)for(auto i:a)cout<<i<<" ";cout<<endl
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl

void solve() {
  
   //GuideLine 3.1: Read Input as Usual  
    int n, m;
    cin >> n >> m;
  
    int ans = 0;
    auto query = [&](int x, int y) {
        cout << "? " << x << " " << y << endl;
        cin >> ans;
        return ans;
    };

    auto end = [&](int x, int y) {
        cout << "! " << x << " " << y << endl;
    };
  
    //GuideLine 3.2: Recieve the Output based on the Input & Proceed Accordingly.
    int cnt1 = query(1, 1);
  
    //GuideLine 3.3:At Last if ans is found Output the Answer as Usual.
    if (!cnt1)end(1, 1);
    else {
        
        int cdist = min(1 + cnt1, m);
        int rdist = min(1 + cnt1, n);
      
        int cnt2 = query(1, cdist);

        if (cnt2 < rdist - 1) {
            end(1 + cnt2, cdist);
        }
        else {
            int cnt3 = query(rdist, cdist);
            end(rdist, cdist - cnt3);
        }
    }

}

int32_t main()
{
  //GuideLine 2:
  // ios::sync_with_stdio(false); cin.tie(NULL);
    int t = 1;
    cin >> t;
  
    while (t--) {
        solve();
    }

    return 0;
}
//INteractive Problem Example 2: Using  Binary Search
//Problem Link: https://codeforces.com/problemset/problem/1807/E

//Interactive CODE:
void solve() {
    int n; cin >> n;
    int a[n + 1] = {0}; 
  for (int i = 1; i <= n; i++)cin >> a[i];

    function<int(int, int)> query = [&](int l, int r) {
        int sum = 0ll;
        cout << "? " << r - l + 1 << " ";
        while (l <= r) {cout << l << " "; l++;}
        cin >> sum;
        return sum;
    };

    int l = 1, h = n + 1;
    int pre[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }
    int ans = 0;
    while (l <= h) {
        int mid = ((h - l) / 2) + l;
        int weight = query(l, mid);
        int stones = pre[mid] - (l > 0 ? pre[l - 1] : 0);
        if (weight == stones) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
            ans = mid;
        }
    }
    cout << "! " << ans << endl;

}
