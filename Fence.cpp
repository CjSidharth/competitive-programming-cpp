#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    int tall = 0;
    cin >> n >> h;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > h)
        {
            tall += 1;
        }
    }
    cout << ((sizeof(a)/sizeof(a[0])) - tall)+2*tall;
}
