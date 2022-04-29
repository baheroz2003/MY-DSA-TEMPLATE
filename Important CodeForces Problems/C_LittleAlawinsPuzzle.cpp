//https://codeforces.com/contest/1534/problem/C
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define pi pair<int,int>
#define vii vector<pi>
#define pb push_back
#define a first
#define b second
using namespace std;
vector<pair<int, int>> v(1000000);
// vii v(1000000);
bool visited[1000000] = {0};
long long binpow(long long a, long long b, long long m) {
	a %= m;
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

bool dfs(int i)
{
	if (visited[i] == true)return false;
	visited[i] = true;
	int k = v[i].b;
	// cout << v[i].a << " " << v[i].b << endl;
	dfs(k);
	return true;
}

void graph()
{
	int n;
	cin >> n;
	v.resize(n);
	v.pb({0, 0});
	rep(i, n, 1) {
		cin >> v[i + 1].a;
	}
	rep(i, n, 1) {
		cin >> v[i + 1].b;
	}
	rep(i, n + 1, 1)visited[i] = false;

	sort(v.begin(), v.end());

	// cout << v.size() << endl;
	// cout << v[0].a << " " << v[0].b << endl;
	// rep(i, n, 1)
	// {
	// cout << v[i + 1].a << " " << v[i + 1].b << endl;
	// }
	int sum = 0;
	int i = 0, k = 0;
	rep(i, n, 1)
	{
		if (visited[v[i + 1].a] == 0)
		{
			k = dfs(v[i + 1].a);
			sum += k ;
		}
	}
	cout << binpow(2, sum, mod) << endl;
	// cout << sum << endl;
	// cout << (1 << sum) << endl;
}

void pr()
{

}

void abpalindrome()
{
	//One Case MISSING
	int a, b;
	cin >> a >> b;
	string str;
	cin >> str;
	int n = str.length(), z = 0, o = 0, zero = 0, one = 0, rz = 0, ro = 0, q = 0;
	rep(i, n, 1) {
		if (str[i] == '0')z++;
		else if (str[i] == '1')o++;
		else q++;
	}
	rz = a - z;
	ro = b - o;
	int flag = 0;
	if (a % 2 == 1 && b % 2 == 1)cout << -1 << endl;
	else if ((a + b) != n)cout << -1 << endl;
	else if ((z > a) || (o > b) || (rz + ro) != q)cout << -1 << endl;
	else {
		if (a % 2 == 1 && str[n / 2] == '?')str[n / 2] = '0';
		else if (b % 2 == 1 && str[n / 2] == '?')str[n / 2] = '1';
		rep(i, n, 1) {
			if (str[i] != '?' && str[n - i - 1] == '?') {
				str[n - i - 1] = str[i];
				if (str[i] == '0')rz--;
				else if (str[i] == '1')ro--;
			}
			else if (str[i] == '?' && str[n - i - 1] != '?') {
				str[i] = str[n - i - 1];
				if (str[n - i - 1] == '0')rz--;
				else if (str[n - i - 1] == '1')ro--;
			}
			else if (str[i] == '?' && str[n - i - 1] == '?') {
				if (rz >= ro) {
					str[i] = str[n - i - 1] = '0';
					rz -= 2;
				}
				else {
					str[i] = str[n - i - 1] = '1';
					ro -= 2;
				}
			}
			if (str[i] != str[n - i - 1]) {flag = 1; break;}
		}
		if (flag == 1)cout << -1 << endl;
		else if (ro != 0 && rz != 0)cout << -1 << endl;
		else cout << str << endl;
		// rep(i, n, 1) {
		// 	if (str[i] == '0')zero++;
		// 	else one++;
		// }
		// cout << a << " " << b << " " << zero << " " << one << endl;
		// cout << rz << " " << ro << endl;
	}

}



int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		graph();
		// pr();
		// abpalindrome();
	}
}


 
