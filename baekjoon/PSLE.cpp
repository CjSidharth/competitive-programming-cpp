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
    int s; cin >> s;
    if(s >= 91)
    {
        cout << "A*";
    }
    else if( s >= 75 && s <= 90)
    {
        cout << "A";
    }
    else if(s >= 60 && s <= 74)
    {
        cout << "B";
    }
    else if(s >= 50 && s <= 59)
    {
        cout << "C";
    }
    else if(s >= 35 && s<= 49)
    {
        cout << "D";
    }
    else if(s >= 20 && s<= 34)
    {
        cout << "E";
    }
    else
    {
        cout << "U";
    }
}
