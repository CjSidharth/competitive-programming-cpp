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
    vi num;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    if(n%2 == 0)
    {
        cout << num[n/2];
    }
    else
    {
        cout << num[(n-1)/2];
    }
}
