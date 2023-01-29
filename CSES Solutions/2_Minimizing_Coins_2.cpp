#include<iostream>
#include <vector>
#define mod 1000000007
#define in(a) for(auto &i:a)cin>>i
#define dbg(x) cout<<#x<<"->"<<x<<endl
#define out(a)for(auto i:a)cout<<i<<" ";cout<<endl
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl
using namespace std;
//State:
//Transition:
//Base Case:
//Time Complexity=Number of states * Transition time for each state
//Space Complexity:

//CSES:Minimizing Coins.
//Knapsack Approach

vector<vector<int>> dp(109, vector<int>(1000009, 1e7));

//1->Recursive Approach:TLE
int rec(int a[], int n, int sum) {

	if (sum == 0)return 0;
	if (sum < 0 || n == 0)return 1e7;
	if (dp[n - 1][sum] == 1e7) {
		int notpick = rec(a, n - 1, sum);
		int pick = rec(a, n, sum - a[n - 1]) + 1;
		int ans = min(notpick, pick);
		dp[n - 1][sum] = ans;
	}
	return dp[n - 1][sum];
}

int main() {
//2->Iterative Approach: AC
  
	//STATE:
	// dp[i][j] represents minimum no. of coins required to make sum equal to j using i coins.(by using any coin any number of times)

	//Transition:

	//dp[i][j]=min(not pick, pick+1);
	//not pick=dp[i-1][j]
	//pick=dp[i][j-a[i-1]];

	//Base Cases:

	//1->When no. of coins is zero we can't make any sum
	//i==0  dp[i][j]=INT_MAX

	//2->When the sum to make is zero we don't require any coins
	//j==0  dp[i][j]=0
  
  //Time Complexity: O(i*j)
  //Space Complexity: O(i*j)

	int n, sum; cin >> n >> sum;
	int a[n]; in(a);

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (j == 0)dp[i][j] = 0;
			else if (i == 0)dp[i][j] = 1e7;
			else {
				int notpick = dp[i - 1][j];

				//Only Pick when total sum is greater than or equal to current coin.
				int pick = 1e7;
				if (j - a[i - 1] >= 0)pick = dp[i][j - a[i - 1]];

				dp[i][j] = min(notpick, pick + 1);
			}
		}
	}

	cout << ((dp[n][sum] == 1e7) ? -1 : dp[n][sum]) << endl;


 //Calling Recursive Function:TLE

	// dp[0][0] = 0;
	// int ans = rec(a, n, sum);
	// cout << ((ans == 1e7) ? -1 : ans) << endl;

}
