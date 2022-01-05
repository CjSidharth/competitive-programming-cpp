#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int na = 0;
    int nd = 0;
    cin >> n;
    string wins;
    cin >> wins;
    for(int i = 0; i < n; i++)
    {
        if(wins[i] == 'A')
        {
            na += 1;
        }
        else if (wins[i] == 'D')
        {
            nd += 1;
        }
    }
    if(na < nd)
    {
        cout << "Danik";
    }
    else if(na > nd )
    {
        cout << "Anton";
    }
    else if (na == nd)
    {
        cout << "Friendship";
    }
}
