//https://codeforces.com/contest/816/problem/B
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
#define int long long
#define mod 100000000
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define pb push_back
#define f first
#define s second
using namespace std;
//<-------------------------------CODE------------------------------->
int v[200005] = {0};
void karen()
{
	int n, k, q;
	cin >> n >> k >> q;
	int h[200005] = {0};

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		h[a]++;
		h[b + 1]--;
	}

	for (int i = 1; i < 200005; i++)
		h[i] += h[i - 1];

	for (int i = 0; i < 200005; i++)
	{
		v[i] = 0;
		if (h[i] >= k)v[i]++;
	}

	for (int i = 1; i < 200005; i++)
		v[i] += v[i - 1];

	for (int i = 0; i < q; i++)
	{
		int a, b; cin >> a >> b;
		if (a > 0)cout << v[b] - v[a - 1] << nl;
		else cout << v[b] << nl;
	}
}
void esc()
{
	int n, mx = INT_MIN; cin >> n;
	int a[n]; for (int &i : a)cin >> i;
	int i = 0, cnt = 0, j;
	while (i < n)
	{
		j = i + 1;
		while (a[i] - a[j] == 0) {i++; j++; cnt++;}
		int x = a[i], y = a[j];
		while (i < n && (a[i] == x || a[i] == y)) {i++; cnt++;}
		mx = max(cnt, mx);
		cnt = 0;
	}
	cout << mx << nl;
}

void solve()
{
	//GREG && ARRAY
	int n, m, q; cin >> n >> m >> q;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<pair<pair<int, int>, int>> v;
	for (int i = 0; i < m; i++)
	{
		int l, r, f;
		cin >> l >> r >> f;
		l--; r--;
		v.pb({{l, r}, f});
		// cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << nl;
	}

	map<int, int> c;
	// vector<int> c(m + 1);		///STORES OCCURENCE OF EACH OPERATION.
	int jk = m;
	while (q--)
	{
		int l, r; cin >> l >> r;
		l--;
		r--;

		while (l <= r)
		{
			// if (l >= 0 && l < jk)
			c[l]++;
			l++;
		}
	}

	vector<int> df(n + 1);
	for (int i = 0; i < m; i++)
	{
		int cnt = c[i];
		int l = v[i].first.first, r = v[i].first.second, y = v[i].second;

		df[l] += (y * cnt);
		// if (r + 1 < n)		//Optional Bound Check Donno whether its right or not
		df[r + 1] -= (y * cnt);
	}

	for (int i = 1; i <= n; i++)
		df[i] += df[i - 1];


	for (int i = 0; i < n; i++) {
		a[i] += df[i];
		cout << a[i] << " ";
	}

}

int32_t main()
{
	// fastio
	int t = 1;
	// cin >> t;
	while (t--)
	{
		// esc();
		karen();
		// solve();
	}
	return 0;

}








 
