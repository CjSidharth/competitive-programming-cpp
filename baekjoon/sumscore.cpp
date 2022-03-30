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
    int x = 0;
    int sum = 0;
    vi num;
    while(x != -1)
    {
        cin >> x;
        num.push_back(x);
    }
    REP(i,0,num.size())
    {
        sum += num[i];
    }
    cout << sum+1;
}
