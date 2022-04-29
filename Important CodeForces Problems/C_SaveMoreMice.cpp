//https://codeforces.com/contest/1593/problem/C
//<---------------------Kamlesh Singh Bisht--------------------->

#include <bits/stdc++.h>
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

// /<---------------------------------Road To Pupil-------------------------------->

void b()
{
	int n,k;cin>>n>>k;
	int a[k];for(int i=0;i<k;i++)cin>>a[i];
	sort(a,a+k);
	int cat=0,mice=k-1,cnt=0;
	while(cat<n)
	{
		if(mice<0)break;
		if(cat>=a[mice])break;
		cat+=n-a[mice];cnt++;
		mice--;
	}
	cout<<cnt<<endl;
}

int32_t main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t=1;
	cin >> t;	

	while (t--)
	{
		b();
	}

	return 0;
}









 
