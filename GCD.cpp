#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0)
    {
        return 0;
    }
    if(b == 0)
    {
        return 0;
    }
    if(a == b)
    {
        return a;
    }
    if (a > b)
    {
        return gcd(b,a-b);
    }
    return gcd(a, b-a);
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
}
