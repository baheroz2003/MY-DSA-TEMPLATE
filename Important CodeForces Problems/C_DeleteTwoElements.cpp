//https://codeforces.com/contest/1598/problem/C
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

void solve()
{
	int n,ans=0;cin>>n;
	vector<int> s;
	map<int,int> m;
	int mean=0,tm=0;

	for(int i=0;i<n;i++)
	{
		int temp;cin>>temp;
		s.push_back(temp);
		m[temp]++;
		mean+=temp;
	}
	
	if((2*mean)%n!=0){
		cout<<"0"<<endl;
		return;
	}
	for(auto i:s)
	{		
		int tof=((2*mean)/n)-i;
		ans+=m[tof];
		if(tof==i)ans--;
		// if(m[tof]>0)
	}

	if(ans)ans/=2;
	cout<<ans<<endl;

}

int32_t main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t=1;
	cin >> t;	

	while (t--)
	{
		solve();
	}

	return 0;
}









 
