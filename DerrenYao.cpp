#include<fstream>
#include<bits/stdc++.h>
#define PB push_back
#define P push
using namespace std;
int main()
{
    vector<int> v;
    v.PB(4);
    cout << v[0];
    stack<int> s;
    s.P(1);
    s.P(2);
    s.P(3);
    for(int i = 0;i<4;i++)
    {
        cout << s[i];
    }
}
