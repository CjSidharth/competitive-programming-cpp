#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<pair<int,int>> time(n);
    vector<int> d;
    for(int i = 0; i < n; i++)
    {
        cin >> time[i].first >> time[i].second;
    }
    for(int j = 0; j < n; j++)
    {
        d.push_back(time[j].second - time[j].first);
    }
    d.sort()
}
