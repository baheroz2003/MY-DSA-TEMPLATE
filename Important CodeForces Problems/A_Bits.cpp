//https://codeforces.com/contest/484/problem/A
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
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

int fun(int l, int r)
{
	if (l == r)return l;
	else {
		int i = 0;
		while ((1ll << i) <= r)i++;
		i--;
		int k = 1ll << i;

		if (((k << 1) - 1) <= r)return ((k << 1) - 1);
		else if ((k - 1) >= l)return k - 1;
		else {
			int ans = fun(l - k, r - k) + k;
			return ans;
		}
	}
}

void B()
{
	int l, r; cin >> l >> r;
	int ans2 = fun(l, r);
	cout << ans2 << endl;

}

int32_t main()
{
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		B();
	}
	return 0;

}







 
