//https://codeforces.com/contest/1213/problem/C
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
void book()
{
	// Problem-Link-> https://codeforces.com/contest/1213/problem/C

	int n, m; cin >> n >> m;
	int sum = 0, ans = 0, res = 0, od = (9 * 10) / 2, ev = 40, fi = 25;
	if (n < m)cout << 0 << endl;
	else if (n == m)cout << n % 10 << endl;
	else if (m % 10 == 0)cout << 0 << endl;
	else if (m % 10 != 5 && m % 10 != 0 && (m & 1))
	{
		int pt = (n / m) / 10;
		int rem = (n / m) % 10;
		ans += pt * od;
		int cnt = 0;
		while (cnt < rem)
		{
			res += m;
			sum += (res % 10);
			cnt++;
		}
		cout << ans + sum << endl;
	}
	else if (m % 10 == 5)
	{
		int pt = (n / m) / 10;
		int rem = (n / m) % 10;
		ans += pt * fi;
		int cnt = 0;
		while (cnt < rem)
		{
			res += m;
			sum += res % 10;
			cnt++;
		}
		cout << ans + sum << endl;
	}
	else {
		int pt = (n / m) / 10;
		int rem = (n / m) % 10;
		ans += pt * ev;
		int cnt = 0;
		while (cnt < rem)
		{
			res += m;
			sum += res % 10;
			cnt++;
		}
		cout << ans + sum << endl;
	}

}


int32_t main()
{
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		book();
	}
	return 0;

}








 
