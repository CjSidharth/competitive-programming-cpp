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
    float s; cin >> s;
    if(s >= 80)
    {
        cout << 4.0;
    }
    else if( s >= 70 && s <= 79)
    {
        cout << 3.6;
    }
    else if(s >= 65 && s <= 69)
    {
        cout << 3.2;
    }
    else if(s >= 60 && s <= 64)
    {
        cout << 2.8;
    }
    else if(s >= 55 && s<= 59)
    {
        cout << 2.4;
    }
    else if(s >= 50 && s<= 54)
    {
        cout << 2.0;
    }
    else if(s >= 45 && s <= 49)
    {
    	cout << 1.6;
    }
    else if(s>=40 && s <= 44)
    {
    	cout << 1.2;
    }
    else if(s < 40)
    {
        cout << 0.8;
    }
}
