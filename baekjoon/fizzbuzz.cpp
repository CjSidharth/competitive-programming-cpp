#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b; cin >> n >> a >> b;
    REP(i,1,n+1)
    {
        if(i%a == 0 && i %b == 0)
        {
            cout << "FizzBuzz" << "\n";
        }
        else if ( i%a == 0)
        {
            cout << "Fizz" << "\n";
        }
        else if ( i%b == 0)
        {
            cout << "Buzz" << "\n";
        }
        else if ( i % a != 0 && i % b != 0)
        {
            cout << i << "\n";
        }
    }
}
