#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d; cin >> n >> d;
    int ans = 0;
    vector<int> p(n);
    for(int i = 0; i < n;i++)
    {
        cin >> p[i];
    }
    sort(p.begin(),p.end(),greater());
    for(int i = 0; i < d; i++)
    {
        ans += p[i];
    }
    cout << ans;
}
