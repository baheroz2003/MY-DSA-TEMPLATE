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
//Unbounded Knapsack Approach
vector<int> dp(1000009, 1e7);

int main() {

	//State:
	//dp[x] represents min no. of coins req to make sum i

	//Transition:

	//dp[x] = min(dp[x-a[j]]+1) 		: (0<=j<n) in coins
	//OR
	//for (auto element : given_array)
	//dp[x]=min(dp[x],dp[x-element]+1);

	//Base Case:
	//if(x==0)dp[x]=0;

	//Time Complexity= Number of states * Transition time for each state
	//Number of states= x;
	//Transition time= O(n)

	// TC:O(n*x)

	// SC :O(x)

	int n, sum; cin >> n >> sum;
	int a[n]; in(a);

	for (int i = 0; i <= sum; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0)dp[i] = 0;
			else {
				if (i - a[j] >= 0)dp
			}
		}
	}

	cout << ((dp[sum] == 1e7) ? -1 : dp[sum]) << endl;

	return 0;
}
