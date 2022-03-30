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
    int a,b;
    cin >> a >> b;
    cout << a*(b%10) << "\n";
    cout << a*(b/10%10) << "\n";
    cout << a*(b/100%10) << "\n";
    cout << a*b << "\n";
}
