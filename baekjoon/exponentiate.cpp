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
    int t; cin >> t;
    vi ans;
    REP(i,0,t)
    {
        int a,b,m; cin >> a >> b >> m;
        int sol = pow(a,b);
        int mod = sol%m;
        cin >> mod >> ans[t];
    }
    REP(i,0,t)
    {
        cout << ans[t] << "\n";
    }

}
