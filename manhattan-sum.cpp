#include<bits/stdc++.h>
#define vi vector<int>
#define all(v) v.begin(),v.end()
using namespace std;
void solve(int tc)
{
    int n; cin >> n;
    vi x(n),y(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(all(x)), sort(all(y));
    int X = x[n/2], Y = y[n/2];
    cout << X << ' ' << Y << "\n";

}
int main()
{
    int tc = 1;
    for(int t = 0; t < tc; t++)
    {
        solve(t);
    }
    return 0;
}
