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
    int n,m,k; cin >> n >> m >> k;
    int ans = 0;
    vi app(n);
    REP(i,0,n)
    {
        cin >> app[i];
    }
    vi hou(m);
    REP(i,0,n)
    {
        cin >> hou[i];
    }
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            if(app[i]-k < hou[j] && hou[j] < app[i]+k)
            {
                ans += 1;
            }
        }
    }
        cout << ans;
}
