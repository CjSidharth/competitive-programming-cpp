#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    int mag[2*n];
    for(int j = 0; j < 2*n;j++)
    {
        cin >> mag[j];
    }
    for(int i = 0; i < 2*n; i++)
    {
        if(mag[i] == mag[i+1])
        {
            ans++;
        }
    }
}
