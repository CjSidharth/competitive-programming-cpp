#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi days;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        days.push_back(x);
    }
    sort(days.begin(),days.end());
    REP(i,0,n)
    {
        if(i != n-1)
        {
            cout << days[i] << " ";
        }
        else
        {
            cout << days[i] << "\n";
        }
    }
}
