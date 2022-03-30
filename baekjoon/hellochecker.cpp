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
    string s = "Hello World";
    string t;
    int n = 0;
    getline(cin,t);
    if(t.size() != s.size())
    {
        cout << "Wrong Answer";
    }
    REP(i,0,n)
    {
        if(s[i] != t[i])
        {
            break;
        }
        else
        {

        }
    }
}
