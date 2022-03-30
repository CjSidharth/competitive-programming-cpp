#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    vector<int> val;
    vector<float> ans;
    for(int i = 0; i < t;i++)
    {
        cin >> val[i];
        ans[i] = pow(val[i],1/3);
    }
    for(int i = 0; i< t ;i++)
    {
        cout << ans[i];
    }
}
