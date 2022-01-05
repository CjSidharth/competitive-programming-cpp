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
    vi al(k);
    vi num(10);
    REP(i,0,k)
    {
        cin >> al[i];
    }
    sort(al.begin(),al.end());
    iota(num,num+10,0);

}
