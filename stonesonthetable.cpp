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
    int n; cin >> n;
    int ans = 0;
    string s[n];
    REP(i,0,n)
    {
        cin >> s[i];
    }
    REP(i,0,n)
    {
        if(s[i] == s[i+1])
        {
            ans++;
        }
    }
    cout << ans;
}
