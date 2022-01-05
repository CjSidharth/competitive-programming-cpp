#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> dp(1000000,-1);
const unsigned int M = 1000000007;
int f(int n)
{
    if(n < 0) return 0;
    if( n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] =  (f(n-1) + f(n-2) + f(n-3) + f(n-4) + f(n-5) + f(n-6))%M;
}

signed main()
{
    int n;
    cin >> n;
    cout << f(n);
}

