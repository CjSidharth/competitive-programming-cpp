#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
unsigned main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    set<int> N;
    REP(i,0,n)
    {
        int a; cin >> a;
        N.insert(a);
    }
    cout << size(N);
}
