#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1,s2;
    cin >> s1 >> s2;
    if(s1 == s2)
    {
        cout << s1;
    }
    else if (s1 == 'R' || s2 == 'R')
    {
        cout << 'R';
    }
    else if (s1 == 'G')
    {
        cout << s2;
    }
    else if(s2 == 'G')
    {
        cout << s1;
    }
}
