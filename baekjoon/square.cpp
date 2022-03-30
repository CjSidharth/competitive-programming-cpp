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
    cin >> n;
    REP(i,1,n+1)
    {
        if(i != n+1)
        {
            cout << i*i << " ";
        }
        else
        {
            cout << i*i;
        }
    }
}
