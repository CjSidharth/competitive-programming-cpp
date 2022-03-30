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
    vi ans,a,b;
    int x,y;
    while(x != 0 && y != 0)
    {
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
        ans.push_back(x+y);
    }
    REP(i,0,ans.size()-1)
    {
        cout << ans[i] << "\n";
    }
}
