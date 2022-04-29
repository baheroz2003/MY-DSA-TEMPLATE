//https://codeforces.com/contest/435/problem/B
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
// #define int long long
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
	string s; cin >> s;
	int k; cin >> k;
	int n = s.length();
	int j = 0ll, mx = INT_MIN, mxi = INT_MIN;
	while (k > 0ll && j < n )
	{
		mx = int(s[j] - '0'), mxi = -1;
		int flg = 0, cnt = 0ll;
		for (int i = j; i - j <= k && i < n; i++)
		{
			if (s[i] - '0' > mx) {
				mx = int(s[i] - '0');
				mxi = i;
				flg = 1;
			}
		}
		if (mx != int(s[j] - '0')) {
			for (int x = mxi; x > j; x--)
			{
				swap(s[x], s[x - 1]);
			}
		}
		if (mxi != -1)k -= mxi - j;
		j++;
	}
	cout << s << endl;
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








 //Rated-1400 TLEDAYs
