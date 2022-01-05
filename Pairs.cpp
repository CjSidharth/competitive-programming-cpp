#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> pairofints;
    cin >> pairofints.first >> pairofints.second;
    if(pairofints.first > pairofints.second)
    {
        swap(pairofints.second,pairofints.first);
    }
    cout << pairofints.first << " " << pairofints.second << "\n";
}
