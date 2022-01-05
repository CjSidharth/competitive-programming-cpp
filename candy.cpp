#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> sus;
    for(int i = 0; i < n;i++)
    {
        cin >> sus[i];
    }
    int ans,a,b; cin >> a >> b;
    for(int i = a-1; i < b-1; i++)
    {
        ans += sus[i];
    }
    cout << ans;
}
