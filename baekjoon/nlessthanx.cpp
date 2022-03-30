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
    int n,x;
    vi num;
    cin >> n >> x;
    REP(i,0,n)
    {
        int a;
        cin >> a;
        if(x > a)
        {
            num.push_back(a);
        }
    }
    REP(i,0,num.size())
    {
        cout << num[i] << "\n";
    }
}
