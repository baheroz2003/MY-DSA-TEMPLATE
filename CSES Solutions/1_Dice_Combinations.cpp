#include<iostream>
#include <vector>
#define mod 1000000007
#define in(a) for(auto &i:a)cin>>i
#define dbg(x) cout<<#x<<"->"<<x<<endl
#define out(a)for(auto i:a)cout<<i<<" ";cout<<endl
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl
using namespace std;
//CSES: Dice Combinations
int main() {

	int n; cin >> n;
	int dp[n + 1] = {0};

	dp[0] = 1;//Base Case

	//STATE:
	//dp[i] represents the number of ways in which i can be formed by throwing a dice

	//Transition :The sum of all the ways of throwing a dice once.
	//dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6]

	//Result: Will be stored at dp[n].

	for (int i = 1; i <= n; i++) {
		for (int j = i - 1; j >= i - 6 && j >= 0; j--) {
			dp[i] = ((dp[i] % mod) + (dp[j] % mod)) % mod;
		}
	}

	cout << dp[n] << endl;
}
