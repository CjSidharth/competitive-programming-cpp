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
    if(n%400 == 0)
    {
        cout << 1;
    }
    else if(n%100 == 0)
    {
        cout << 0;
    }
    else if(n%4 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}
