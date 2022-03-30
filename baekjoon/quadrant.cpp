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
    int x,y;
    cin >> x >> y;
    if(x > 0 && y > 0)
    {
        cout << 1;
    }
    else if(x < 0 && y < 0)
    {
        cout << 3;
    }
    else if(x > 0 && y < 0)
    {
        cout << 4;
    }
    else if(x < 0 && y > 0)
    {
        cout << 2;
    }
}
