
//https://codeforces.com/contest/1574/problem/B
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

void s()
{
	int a, b, c, m;
	cin >> a >> b >> c >> m;
	int mx = max({a, b, c});
	if (a == 1 && b == 1 && c == 1 && m == 1)cout << "NO" << nl;
	else if (a == b && b == c && a == m)cout << "YES" << endl;
	else {
		int cnt = 0, sum = a + b + c;
		if (a == mx)cnt++;
		if (b == mx)cnt++;
		if (c == mx)cnt++;
		int mn = mx - (sum - mx);
		mn--;
		// dbg(mn);
		if (cnt > 1 && m < ((a - 1) + (b - 1) + (c - 1)))cout << "YES" << endl;
		else if (mn >= 0 && m < mn)cout << "NO" << endl;
		else if (m > ((a - 1) + (b - 1) + (c - 1)))cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}

int32_t main()
{
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		s();
	}
	return 0;

}








 
