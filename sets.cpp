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
    int n; cin >> n;
    int ans = 0;
    set<int> s;
    REP(i,0,n)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
}
