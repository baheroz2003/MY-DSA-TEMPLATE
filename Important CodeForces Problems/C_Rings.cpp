//https://codeforces.com/contest/1562/problem/C
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
// void s()
// {

// }

void solve()
{
	int t; cin >> t;
	int i = 0;
	while (i < t)
	{
		int n; cin >> n; string s; cin >> s;
		bool ok = true;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0') {ok = false; break;}
		}
		if (ok)
		{
			if (n & 1)
			{
				cout << 1 << " " << n / 2 + 1 << " " << n / 2 + 1 << " " << n << nl;
			}
			else cout << 1 << " " << n / 2 << " " << n / 2 + 1 << " " << n << nl;
		}
		else {
			int st = 0, en = n;
			for (int i = 0; i < n / 2; i++)
			{
				if (s[i] == '0') {st = i + 1; en = n; break;}
			}
			if (st) {
				cout << st << " " << n << " " << st + 1 << " " << n << nl;
			}
			else {
				for (int i = n / 2; i < n; i++)
				{
					if (s[i] == '0') {st = 1; en = i + 1; break;}
				}
				cout << st << " " << en << " " << st << " " << en - 1 << nl;
			}
		}
		i++;
	}
}

void xd()
{
	int n, x; cin >> n >> x;
	int a[n]; for (int &i : a)cin >> i;
	sort(a, a + n);
	for (int i = 1; i < n; i++)a[i] += a[i - 1];
	int c = 0, k = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % x == 0)k++;
		else {
			if (i > 0) {


			}
			c = max(k, c);
		}

	}
}

void bafc()
{
	int n, k; cin >> n >> k; int a[n]; for (int &i : a)cin >> i;
	k--;
	int cnt = 0, i = k - 1, j = k + 1;
	if (a[k] == 1)cnt++;
	while (i >= 0 || j < n)
	{
		if ((i >= 0 && a[i] == 1) && (j < n && a[j] == 1))cnt += 2;
		else if (i < 0 && j < n && a[j] == 1)cnt++;
		else if (j >= n && i >= 0 && a[i] == 1)cnt++;
		i--;
		j++;
	}
	cout << cnt << endl;
}

void acr() {

	int n; cin >> n;
	int a[n]; for (int &i : a)cin >> i;

	multiset<int> m;

	int i = 0, j = 0, ans = INT_MIN;

	while (j < n)
	{
		m.insert(a[j]);
		int mx = *(m.rbegin());
		int mn = *(m.begin());
		int d = mx - mn;
		j++;
		while (d > 1)
		{
			m.erase(m.begin());
			mx = *(m.rbegin());
			mn = *(m.begin());
			d = mx - mn;
			i++;
		}
		ans = max(j - i, ans);
		// j++;
	}
	cout << ans << nl;
}

void solve2()
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
	// int t = 1;
	// cin >> t;
	// while (t--)
	{
		// s();
		solve();
		// pal();
		// xd();
		// bafc();
		// acr();
		// esc();
		// solve();
	}
	return 0;

}




//TLE_DAYs



 
