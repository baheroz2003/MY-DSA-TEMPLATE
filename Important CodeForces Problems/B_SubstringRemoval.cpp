//https://codeforces.com/contest/1096/problem/B
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cstrt clock_t start, end; double ctd; start = clock();
#define cend end = clock(); ctd = ((double) (end - start)) / CLOCKS_PER_SEC;cout<<ctd<<"sec"<<endl;
#define int long long
#define mod 1000000007
#define md 998244353ll
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

void combi()
{

	int n; cin >> n; string a; cin >> a;
	int cnt = 1ll, cnt2 = 1ll;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1])cnt = (cnt + 1) % md;
		else break;
	}

	for (int i = n - 1; i > 0; --i) {
		if (a[i] == a[i - 1])cnt2 = (cnt2 + 1) % md;
		else break;
	}

	// ebg(cnt, cnt2);

	if (a[0] == a[n - 1]) {
		cout << ((( cnt % md) + (cnt2 % md) + 1) % md + ((cnt % md) * (cnt2 % md)) % md) % md << endl;
		// cout << (cnt + 1)*(cnt2 + 1) << endl;
	}
	else cout << (cnt % md) + (cnt2 % md) + 1 << endl;

}
int32_t main()
{
	fastio;
	int t = 1;
	// cin >> t;
	while (t--)
	{
		combi();
	}
	return 0;
}
