//https://codeforces.com/contest/1326/problem/C
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

void solve()
{

	int n, k; cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];
	int bar = n - k, ans = 1, l = -1, r = -1, sum = 0;
	bool ok = true;
	for (int i = 0; i < n; i++)
	{
		if (ok && a[i] > bar)
		{
			l = i;
			sum += a[l];
			ok = false;
		}
		else if (!ok && a[i] > bar) {
			r = i;
			sum += a[r];
			int temp = r - l;
			ans = (ans % modo * temp % modo) % modo;
			l = r;
		}
	}
	cout << sum << " " << ans << endl;
}

int32_t main()
{
	fastio
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;

}







 
