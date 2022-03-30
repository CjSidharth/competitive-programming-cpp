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
    int n;
    int male = 0;
    int female = 0;
    cin >> n;
    vector<string> sounds;
    REP(i,0,n)
    {
        string x;
        cin >> x;
        sounds.push_back(x);
    }
    REP(i,0,n)
    {
        if(sounds[i] == "MEOW")
        {
            male++;
        }
        else if(sounds[i] == "MEW")
        {
            female++;
        }
    }
    if(male != 0)
    {
        cout << female/male;
    }
    else
    {
        cout << "OMG MEEEAHHHH!!!!";
    }
}
