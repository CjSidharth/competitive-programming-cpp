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
    int no = 0;
    cin >> n;
    vi panda;
    REP(i,0,n)
    {
        int x; cin >> x;
        panda.push_back(x);
    }
    int max = *max_element(panda.begin(), panda.end());
    REP(j,0,n)
    {
        if(max == panda[j] )
        {
            no++;
        }
    }
    if(no != 1)
    {
        cout << "MMMMMEEEEOOOOOWWWW!!!!!";
    }
    else
    {
        cout << max;
    }
}
