//https://codeforces.com/contest/719/problem/B#include <bits/stdc++.h>

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
	int n; cin >> n;
	string s; cin >> s;
	int r = 0, b = 0, ar = 0, ab = 0;
	for (int i = 0; i < n; i++)
	{
		if (!(i & 1) && s[i] == 'b')b++;
		else if (i & 1 && s[i] == 'r')r++;
	}
	for (int i = 0; i < n; i++)
	{
		if (!(i & 1) && s[i] == 'r')ar++;
		else if (i & 1 && s[i] == 'b')ab++;
	}

	cout << min(max(r, b), max(ar, ab)) << endl;

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








 
