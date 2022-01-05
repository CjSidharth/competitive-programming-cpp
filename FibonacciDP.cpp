#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> dp(2005,-1);
int n,m;
int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = (fib(n-1) + fib(n-2))%m;
}
signed main()
{
    cin >> n >> m;
    cout << fib(n);

}

