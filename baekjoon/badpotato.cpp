#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int w[n];
    vi dp;
    REP(i,0,n)
    {
        cin >> w[i];
    }
    dp[0] = w[0];
    REP(i,1,n)
    {
        if(w[i] > 0)
        {
            dp[i] = dp[i-1] + w[i];
        }
        else
        {
            dp[i] = dp[i-1];
        }

    }
    cout << dp[n];
}
