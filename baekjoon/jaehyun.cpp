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
    int sum = 0;
    int n;
    cin >> n;
    stack<int> num;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            num.pop();
        }
        else
        {
            num.push(x);
        }
    }
    while (!num.empty()) {
        sum += num.top();
        num.pop();
    }
    cout << sum;
}
