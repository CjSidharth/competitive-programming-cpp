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
    int ans = 0;
    string s;
    cin >> s;
    string j = "Hello World";
    REP(i,0,s.size())
    {
        if(s[i] == j[i])
        {
            ans++;
        }
        else
        {
            cout << "NO";
            break;
        }
    }
}
