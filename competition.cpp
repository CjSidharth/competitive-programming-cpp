#include<bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define vi vector<int>
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
    int n,a,b,ans; cin >> n >> a >> b;
    vi A(n),B(n),d(n);
    REP(i,0,n)
    {
        cin >> A[i];
    }
    REP(j,0,n)
    {
        cin >> B[j];
    }
    REP(k,0,n)
    {
        d[k] = A[k] - B[k];
    }
    sort(all(d),greater());
    REP(l,0,n)
    {
        cout << d[l];
    }

}
