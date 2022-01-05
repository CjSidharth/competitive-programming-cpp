#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> sus(n);
    for(int i = 0; i < n; i++)
    {
        cin >> sus[i];
    }
    sort(sus.rbegin(),sus.rend());
    for(int j = 0; j < n; j++)
    {
        cout << sus[j] << " ";
    }
}
