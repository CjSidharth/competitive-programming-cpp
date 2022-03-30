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
    vi ans;
    cin >> n;
    REP(i,0,n)
    {
        int x,y;
        cin >> x >> y;
        ans.push_back(x+y);
    }
    REP(i,0,n)
    {
        cout << "Case #" << i+1 << ": " << ans[i] << "\n";
    }
}
