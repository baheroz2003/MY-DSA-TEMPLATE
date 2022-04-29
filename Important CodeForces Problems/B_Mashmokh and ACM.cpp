//https://codeforces.com/contest/414/problem/B
//<---------------------Kamlesh Singh Bisht--------------------->
#include <bits/stdc++.h>
#define f first
#define endl '\n'
#define s second
#define pb push_back
#define md 998244353
#define int long long
#define vi vector<int>
#define mod 1000000007
#define pi pair<int,int>
#define in(a) for(int &i:a)cin>>i
#define out(a)for(int i:a)cout<<i<<" ";cout<<endl
#define dbg(x) cout<<#x<<"->"<<x<<endl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<endl;
using namespace std;
/*
//Recursive Memoized DONE.
int dp[2222][2222];
int recur(int n, int k) {
    if (k == 1)return 1ll;
    if (dp[n][k] == -1)
    {
        int ans = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int value = recur(i, k - 1);
                ans = (ans % mod + value % mod) % mod;

                int x = (n / i);
                if (x != i && x != n) {
                    ans = (ans % mod + (recur(x, k - 1)) % mod) % mod;
                }
            }
        }
        if (n != 1)ans = (ans % mod + (recur(n, k - 1)) % mod) % mod;

        dp[n][k] = ans;
    }
    return dp[n][k];
}

int factors(int n)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) {
            cnt++;
            int x = n / i;
            if (x != i && x != n)cnt++;
        }
    }
    if (n != 1)cnt++;
    return cnt;
}
*/

int dp[2002][2002] = {0};
int facts[2001][2001] = {0};

void d()
{
    int n, k; cin >> n >> k;
    for (int i = 0; i <= n; i++)
    {
        dp[i][1] = 1;
    }

    // vector<vector<int>> facts(n + 1, vector<int>(n));
    // int facts[n + 1][n];
    int ptr = 0;
    for (int i = 1; i <= n; i++)
    {
        ptr = 0;
        for (int l = 1; ((l * l) <= i); l++)
        {
            if (i % l == 0)
            {
                facts[i][ptr++] = l;
                int li = i / l;
                if (li != l && li != i) {
                    facts[i][ptr++] = li;
                }
            }
        }
        if (i != 1)
        {
            facts[i][ptr++] = i;
        }
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //         cout << facts[i][j] << " ";
    //     cout << endl;
    // }
    // return;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= k; j++)
        {
            int ans = 0;
            for (int x = 0; x <= n && facts[i][x] != 0; x++)
            {
                int temp = facts[i][x];
                ans = (ans % mod + dp[temp][j - 1] % mod) % mod;
            }
            dp[i][j] = ans;
            /*
            for (int x = 1; x * x <= i; x++)
            {
                if (i % x == 0)
                {
                    ans = (ans % mod + (dp[x][j - 1]) % mod) % mod;

                    int z = i / x;
                    if (z != i && z != x)
                    {
                        ans = (ans % mod + (dp[z][j - 1]) % mod) % mod;
                    }
                }
            }
            if (i != 1)ans = ((ans % mod) + (dp[i][j - 1]) % mod) % mod;
            dp[i][j] = ans;
            */
        }
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = ((sum % mod) + (dp[i][k] % mod)) % mod;
    }
    cout << sum << endl;
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        d();
    }

    return 0;
}

//Rated 1400- Hardest Self Done Problem. DP 
