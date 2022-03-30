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
    vector<string> s;
    vi sizer;
    REP(i,0,n)
    {
        string x;
        cin >> x;
        s.push_back(x);
        sizer.push_back(x.size());
    }
    int max_size = *min_element(sizer.begin(),sizer.end());
    REP(i,0,n)
    {
        if(s[i].size() == max_size)
        {
            cout << s[i];
            break;
        }
    }

}

