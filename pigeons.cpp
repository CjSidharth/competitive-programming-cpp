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
    int n,m; cin >> n >> m;
    int temp = 0;
    bool excess = false;
    string s[m];
    for(int i = 0; i < m; i++)
    {
        cin >> s[i];
        if(s[i] == "LAND")
        {
            temp += 1;
        }
        else if(s[i] == "LEAVE")
        {
            temp -= 1;
        }
        else if(s[i] == "EVACUATE")
        {
            temp = 0;
        }
        cout << temp << "\n";
        if(temp > n)
        {
            excess = true;
        }
    }
    if(excess = true)
    {
        cout << "PLAN REJECTED";
    }
    else
    {
        cout << "PLAN ACCEPTED";
    }
}
