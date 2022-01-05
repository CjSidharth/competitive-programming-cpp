#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> rate(n);
    vector<int> price(n);
    for(int i=0;i<n;i++){
        cin>>rate[i];
    }
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    vector<pair<int, int>> solution(n);
    for (int i = 0; i < n; i++){
    solution[i] = make_pair(rate[i], price[i]);
    }
    for(int i=0;i<n;i++){
        cout<<solution[i].first<<" "<<solution[i].second<<"\n";
    }
    return 0;
}
