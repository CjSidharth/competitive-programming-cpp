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
    vi ex(n);
    iota(ex.begin(),ex.end(),1);
    vi num(n-1);
    REP(i,0,n-1)
    {
        cin >> num[i];
    }
    sort(num.begin(),num.end());
    REP(i,0,n)
    {
        if(num[i] != ex[i])
        {
            cout << i;
        }
    }
}
