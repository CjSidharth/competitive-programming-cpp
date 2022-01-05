#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char c;
    int up,low = 0;
    for(int i = 0; i < s.length(); i++)
    {
        c = s[i];
        if(isupper(c))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    cout << up << low;
}
