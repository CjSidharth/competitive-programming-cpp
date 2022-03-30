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
    int n,d;
    int ans = 0;
    cin >> n >> d;
    vi potato;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        potato.push_back(x);
    }
    sort(potato.begin(),potato.end(),greater<int>());
    REP(i,0,d)
    {
        ans += potato[i];
    }
    cout << ans;
}
