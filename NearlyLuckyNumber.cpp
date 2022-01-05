#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    string num;
    cin >> num;
    if(num.size() == 1)
    {
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < num.size();i++)
    {
        if(num[i] == '4' || num[i] == '7')
        {
            ans++;
        }
    }
}

