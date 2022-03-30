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
    int n,t; cin >> n >> t;
}

signed tob(int n, int t)
{
    REP(i,0,t)
    {
        if(n%2 == 0)
        {
            n = n/2;
            if(n == 1)
            {
                break;
            }
        }
        else
        {
            n = 3n+1
        }
    }
}
