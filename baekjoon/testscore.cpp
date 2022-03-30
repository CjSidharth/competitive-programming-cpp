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
    vector<string> scores;
    vi right;
    int n;
    cin >> n;
    REP(i,0,n)
    {
        string s;
        cin >> s;
        scores.push_back(s);
    }
    REP(i,0,n)
    {
        int rights = 0;
        REP(j,0,scores[i].size())
        {
            if(scores[i][j] == "O")
            {
                right++;
            }
        }
        right.push_back(rights);
    }
    REP(i,0,n)
    {
        cout << right[i] << "\n";
    }
}
