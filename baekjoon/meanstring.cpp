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
    int sum = 0;
    cin >> n;
    vi val;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        sum += x;
        val.push_back(x);
    }
    cout << sum/n;
}
