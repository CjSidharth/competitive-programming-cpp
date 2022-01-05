#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n > 0 && n < 3)
    {
        cout << "That's a terrible potato!";
    }
    else if( n > 2 && n < 6 )
    {
        cout << "That's a normal potato!";
    }
    else if ( n > 5 && n < 9)
    {
        cout << "That's a good potato!";
    }
    else
    {
        cout << "OMG POTATOES!!!";
    }
}
