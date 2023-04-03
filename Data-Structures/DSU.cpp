/*          <----------Kamlesh Singh Bisht---------->         */

#include <bits/stdc++.h>

using namespace std;

#define f first
#define endl '\n'
#define s second
#define pb push_back
#define md 998244353
#define int long long
#define vi vector<int>
#define mod 1000000007
#define inf 1999999999999999999
#define vp vector<pair<int,int>>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define in(a) for(auto &i:a)cin>>i
#define dbg(x) cout<<#x<<"->"<<x<<endl
#define mem(a,val) memset(a,val,sizeof(a))
#define out(a)for(auto i:a)cout<<i<<" ";cout<<endl
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl
void yes(int x = 0) {if (!x)cout << "Yes" << endl; else cout << "YES" << endl;}
void no(int x = 0)  {if (x)cout << "NO" << endl; else cout << "No" << endl;}

struct DSU {
	vi size, parent;
	DSU(int n) {
		parent.resize(n);
		size.resize(n, 1);
		iota(all(parent), 0);
	}
	void join(int x, int y) {
		int px = find_parent(x);
		int py = find_parent(y);
		if (px == py)return;
		if (size[px] >= size[py]) {
			size[px] += size[py];
			parent[py] = px;
		}
		else {
			size[py] += size[px];
			parent[px] = py;
		}
	}
	int find_parent(int node) {
		if (parent[node] == node)return node;
		else {
			return parent[node] = find_parent(parent[node]);
		}
	}
};
