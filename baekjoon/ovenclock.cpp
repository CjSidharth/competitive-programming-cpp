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
    int minutes;
    cin >> minutes;
    while(minutes > 60)
    {
        x += 1;
        minutes -= 60;
    }
    if(x > 24)
    {
        x = x%12;
    }
    y = y + minutes;
    cout << x << "\n" << y;
}
