#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    while(t != 0)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c > 1)
        {
            count++;
        }
        t--;
    }
    cout << count;
}
