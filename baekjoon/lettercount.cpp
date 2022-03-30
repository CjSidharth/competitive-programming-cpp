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
    string s;
    vi alpha(26,-1);
    cin >> s;
    REP(i,0,s.size())
    {

                if(s[i] == 'a')
        {
            alpha[i] = i;
        }
                if(s[i] == 'b')
        {
            alpha[i] = i;
        }
                if(s[i] == 'c')
        {
            alpha[i] = i;
        }
                if(s[i] == 'd')
        {
            alpha[i] = i;
        }
                if(s[i] == 'e')
        {
            alpha[i] = i;
        }
                if(s[i] == 'f')
        {
            alpha[i] = i;
        }
                if(s[i] == 'g')
        {
            alpha[i] = i;
        }
                if(s[i] == 'h')
        {
            alpha[i] = i;
        }
                if(s[i] == 'i')
        {
            alpha[i] = i;
        }
                if(s[i] == 'j')
        {
            alpha[i] = i;
        }
                if(s[i] == 'k')
        {
            alpha[i] = i;
        }
                if(s[i] == 'l')
        {
            alpha[i] = i;
        }
                if(s[i] == 'm')
        {
            alpha[i] = i;
        }
                if(s[i] == 'n')
        {
            alpha[i] = i;
        }
                if(s[i] == 'o')
        {
            alpha[i] = i;
        }
                if(s[i] == 'p')
        {
            alpha[i] = i;
        }
                if(s[i] == 'q')
        {
            alpha[i] = i;
        }
                if(s[i] == 'r')
        {
            alpha[i] = i;
        }
                if(s[i] == 's')
        {
            alpha[i] = i;
        }
                if(s[i] == 't')
        {
            alpha[i] = i;
        }
                if(s[i] == 'u')
        {
            alpha[i] = i;
        }        if(s[i] == 'v')
        {
            alpha[i] = i;
        }        if(s[i] == 'w')
        {
            alpha[i] = i;
        }        if(s[i] == 'x')
        {
            alpha[i] = i;
        }        if(s[i] == 'y')
        {
            alpha[i] = i;
        }        if(s[i] == 'z')
        {
            alpha[i] = i;
        }
    }
    REP(i,0,26)
    {
        cout << alpha[i] << "\n";
    }
}
