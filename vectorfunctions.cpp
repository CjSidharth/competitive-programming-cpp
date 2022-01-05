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
    vi vec(n);
    REP(i,0,n)
    {
        cin>>vec[i];
    }
    void backwards(vector<int>& vec)
    {
        reverse(vec.begin(),vec.end());
    }

}
