#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 4;
    int y = 0;
    int iterations = 0;
    while(x == 4)
    {
        y += x;
        iterations += 1;
        cout << "The value of y after " << iterations << " iterations is " << y << "\n";
        x +=1;
    }
}
