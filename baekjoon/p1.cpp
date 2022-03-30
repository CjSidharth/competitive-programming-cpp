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
    int T;
    cin >> T;
    vi N;
    vi X;
    vi K;
    REP(i,0,T)
    {
        int n,x,k;
        cin >> n >> x >> y;
        N.push_back(n);
        X.push_back(x);
        K.push_back(k);
    }
    REP(i,0,T)
    {
        if(K[i]/X[i] > N[i])
        {
            cout << N[i] << "\n";
        }
    }
}
