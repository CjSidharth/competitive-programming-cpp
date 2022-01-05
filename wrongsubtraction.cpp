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
    int n,k; cin >> n >> k;
    REP(i,0,k)
    {
        if(n%10 == 0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
    }
    cout << n;
}
