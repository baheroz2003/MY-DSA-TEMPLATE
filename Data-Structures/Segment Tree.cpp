#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Segment Tree-A data structure that stores answer to operations of queries.

//1 based indexing considered
 
void build(vector<ll>& segtree, vector<ll>&a, ll idx, ll start, ll end) {
	if (start == end) {
		segtree[idx] = a[start];
		return;
	}
  
	ll mid = (start + end) / 2;
	build(segtree, a, 2 * idx, start, mid);
	build(segtree, a, 2 * idx + 1, mid + 1, end);
  
	segtree[idx] = segtree[2 * idx] + segtree[2 * idx + 1];
}
 
void update(vector<ll>& segtree, ll idx, ll i, ll val, ll start, ll end) {
	if (start == end) {
		segtree[idx] = val;
		return;
	}
 
	ll mid = (start + end) / 2;
 
	// if(start<=i && i<=mid)
	if (i <= mid)
		update(segtree, 2 * idx, i, val, start, mid);
 
	// else if(mid<idx && end<=idx)
	else
		update(segtree, 2 * idx + 1, i, val, mid + 1, end);
 
	segtree[idx] = segtree[2 * idx] + segtree[2 * idx + 1];
	
}
 
ll query(vector<ll> &segtree, ll idx, ll start, ll end, ll l, ll r) {
 
	//Disjoint
	if (start > r || end < l)
		return 0;
 
	//Total
	else if (start >= l && end <= r)return segtree[idx];
 
	//Partial
	ll mid = (start + end) / 2;
 
	ll left = query(segtree, 2 * idx, start, mid, l, r);
	ll right = query(segtree, 2 * idx + 1, mid + 1, end, l, r);
 
	return left + right;
}
 
int main() {

	ll n, q; cin >> n >> q;
 
	vector<ll> a(n);
	for (ll i = 0; i < n; i++)cin >> a[i];
 
	vector<ll> segtree(4 * n);
	build(segtree, a, 1, 0, n - 1);
 
	// for (auto i : segtree)cout << i << " ";
	// cout << endl;
 
	while (q--) {
		int t; cin >> t;
		if (t == 1) {
			int index, val;
			cin >> index >> val;
			index--;
			update(segtree, 1, index, val, 0, n - 1);
		}
		else {
			ll l, r; cin >> l >> r;
			l--;
			r--;
			cout << query(segtree, 1, 0, n - 1, l, r) << endl;
		}
	}
 
	return 0;
}
