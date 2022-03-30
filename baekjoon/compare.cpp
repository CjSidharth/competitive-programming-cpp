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
    int a,b;
    cin >> a >> b;
    if(a > b)
    {
        cout << ">";
    }
    else if(a < b)
    {
        cout << "<";
    }
    else
    {
        cout << "==";
    }
}
