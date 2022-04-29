//https://codeforces.com/contest/1360/problem/D
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
// Division 2 Virtual Contest in 5minutes-3 October 2021 Dehradun,
//Pending-AB-C CFDiv3 D -Buying SHOvles
bool isprime(int n)
{	
	if(n%2==0)return false;
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0)return false;
	}
	return true;
}

void shovel()
{

	int n,k;cin>>n>>k;
	int hf=1;
	if(n<=k)cout<<1<<nl;
	else if(n%k==0)cout<<n/k<<nl;
	else if(isprime(n))cout<<n<<nl;
	else{
		for(int i=2;i*i<=n;++i)
		{
			if(n%i==0)
			{
				if(i<=k){
				hf=max(hf,i);
				}

				if(n/i != i && n/i<=k)
				{
					hf=max(hf,n/i);
				}
			}
		}
		cout<<n/hf<<endl;
	}

}

int32_t main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t=1;
	cin >> t;	

	while (t--)
	{
		shovel();
	}

	return 0;
}









 
