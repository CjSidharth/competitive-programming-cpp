#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int bit = 0;
    cin >> n;
    vector<string> command;
    for(int i = 0; i < n;i++)
    {
        string s;
        cin >> s;
        command.push_back(s);
    }
    for(int j = 0; j < n; j++)
    {
        if(command.at(j) == "X++")
        {
            bit++;
        }
        else if(command.at(j) == "++X")
        {
            bit++;
        }
        else
        {
            bit--;
        }
    }
    cout  << bit;
}
