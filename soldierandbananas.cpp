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
    int k,n,w; cin >> k >> n >> w;
    int money = 0;
    REP(i,1,w+1)
    {
        money += i*k;
    }
    if (n >= money)
    {
        cout << 0;
    }
    else
    {
        cout << abs(n-money);
    }
    }

