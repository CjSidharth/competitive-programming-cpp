#include<bits/stdc++.h>
using namespace std;

int mintime(int x1,int y1,int x2,int y2)
{
    if(x1 == x2 || y1 == y2)
    {
        return abs(y2 - y1) + abs(x2 - x1);
    }
    else
    {
        return abs(y2 - y1) + abs(x2 - x1) + 2;
    }
}

int main()
{
    int t,x1,y1,x2,y2;
    cin >> t;
    int ans[t];
    for(int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        ans[i] = mintime(x1,y1,x2,y2);
    }
    for(int j = 0 ; j < t; j++)
    {
        cout << ans[j] << "\n";
    }
}
