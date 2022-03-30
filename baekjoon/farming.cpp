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
    int h,w;
    int star = 0;
    cin >> h >> w;
    vector<string> sky;
    REP(i,0,h)
    {
        string x;
        cin >> x;
        sky.push_back(x);
    }
    REP(i,0,h)
    {
        REP(j,0,w)
        {
            if(sky[i][j] == '#')
            {
                star++;
            }
        }
    }
    cout << star;
}
