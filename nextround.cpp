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
    int n,k,ans; cin >> n >> k;
    vi score(n);
    REP(i,0,n)
    {
        cin >> score[i];
    }
    REP(i,0,n)
    {
        if(n == k) ans = n;
        if(score[i] >= score[k] && score[i] != 0) ans++;
    }
    cout << ans;
}
