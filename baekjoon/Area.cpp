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
    int n; cin >> n;
    int area = 0;
    vector<pair<int,int>> coord(n);
    REP(i,0,n)
    {
        cin >> coord[i].first >> coord[i].second;
        area += coord[i].first * coord[i].second;
    }
    cout << area;
}
