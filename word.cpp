#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up = 0;
    int low = 0;
    for (int i = 0; i < s.length(); i++)
    {
        bool result = isupper(s[i]);
        if(result == true)
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up > low)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout << s << "\n";
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout << s << "\n";
    }
}

