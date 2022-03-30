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
    deque<int> num;
    int n,x;
    cin >> n;
    REP(i,0,n)
    {
        string s;
        cin >> s;
        if(s == "push_front")
        {
            cin >> x;
            num.push_front(x);
        }
        else if(s == "push_back")
        {
            cin >> x;
            num.push_back(x);
        }
        else if (s == "front")
        {
            if(num.empty() == 1)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << num.front() << "\n";
            }
        }
        else if(s == "size")
        {
            cout << num.size() << "\n";
        }
        else if(s == "empty")
        {
            cout << num.empty() << "\n";
        }
        else if(s == "pop_front")
        {
            if(num.empty() == 1)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << num.front() << "\n";
                num.pop_front();
            }
        }
        else if(s == "pop_back")
        {
            if(num.empty() == 1)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << num.back() << "\n";
                num.pop_back();
            }
        }
        else if(s == "back")
        {
            if(num.empty() == 1)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << num.back() << "\n";
            }
        }
    }
}
