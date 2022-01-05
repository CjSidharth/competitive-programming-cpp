#include<bits/stdc++.h>
#include <limits>
using namespace std;
int solve(int x)
{
    int coins[5] = {1,5,10,20,100};
    if(x < 0) return INF;
    if (x = 0) return 0;
    int best = INF;
    for(auto c: coins)
    {
        best = min(best,solve(x-c)+1);
    }
    return best;
}

int main()
{
    int N;
    cin >> N;
    int bestvalue = solve(N);
    cout << bestvalue;
}

