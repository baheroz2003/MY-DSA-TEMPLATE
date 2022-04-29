//https://codeforces.com/contest/1561/problem/C
//VK-CUp Final
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define mod 1000000007
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define pb push_back
#define f first
#define s second
#define nl '\n'
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int mx = INT_MIN, mxi = -1, mxj = -1;
	multimap<int, vector<int>> v;
	multimap<int, int> ms;

	for (int i = 0; i < n; i++)
	{
		int mx = INT_MIN;
		int t; cin >> t;
		vector<int> vect;
		for (int j = 0; j < t; j++)
		{
			int x; cin >> x;
			vect.pb(x - j);
			mx = max(x - j, mx);

		}
		v.insert({t, vect});
		ms.insert({mx, t});
	}

	multimap<int, int>::iterator it = ms.begin();
	int start = it->f;
	// cout << start << endl;
	start++;
	it++;
	int cutstart = start;
	while (it != ms.end())
	{
		start += (--it)->s;
		it++;
		if (start <= (it->f))
		{
			cutstart += ((it->f) - start + 1);
			start += ((it->f) - start + 1);
		}
		// ebg(start, cutstart);
		it++;
	}
	cout << cutstart << endl;

	// for (auto  i : ms)
	// 	cout << i.f << " " << i.s << endl;
	// cout << nl;

}

int32_t main()
{
	// cstrt
	fastio;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	// cend
	return 0;
}
