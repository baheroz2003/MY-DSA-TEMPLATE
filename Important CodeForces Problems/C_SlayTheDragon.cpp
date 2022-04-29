//https://codeforces.com/contest/1574/problem/C
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
#define int long long
#define mod  1000000007
#define modo 998244353
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define pb push_back
#define f first
#define s second
using namespace std;

//<-------------------------------CODE-------------------------------->
void c()
{
	int sum = 0;
	int n; cin >> n; int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i]; sum += a[i];
	}
	sort(a, a + n);
	int q; cin >> q;
	while (q--)
	{
		int x, y; cin >> x >> y;
		bool ok = false;
		if (a[n - 1] >= x)ok = true;
		int tsum = sum;
		if (!ok) {
			int k = a[n - 1];
			int inc = x - k;
			tsum -= k;
			tsum = max(0ll, y - tsum);
			cout << inc + tsum << endl;
		}
		else {
			int inc = 0;
			auto ib2 = lower_bound(a, a + n, x);
			int lb = *ib2;
			tsum -= lb;
			tsum = max(0ll, y - tsum);
			if (a[0] != lb)
			{
				ib2--;
				int lb2 = *ib2;
				inc = x - lb2;
				int lsum = sum;
				lsum -= lb2;
				lsum = max(0ll, y - lsum);
				cout << min(tsum, inc + lsum) << endl;
			}
			else cout << tsum << endl;
		}
	}
}

int32_t main()
{
	fastio
	int t = 1;
	// cin >> t;
	while (t--)
	{
		c();

	}
	return 0;

}








 
