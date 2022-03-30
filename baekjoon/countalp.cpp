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
    vector<char> alp{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
    vi alpcount(26,0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    REP(i,0,n)
    {
        REP(j,0,n)
        {
            if(s[i] == alp[j])
            {
                alpcount[j]++;
            }
        }
    }
    REP(i,0,n)
    {
        cout << alp[i] << " " << alpcount[i] << "\n";
    }
}
