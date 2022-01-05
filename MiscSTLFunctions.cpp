#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4; int b = 5;
    swap(a,b);
    cout << a << " " <<  b;
    vector<int> vecc(10,0);
    fill(vecc.begin(),vecc.begin()+5,1);
    vector<int> sus(5);
    iota(sus.begin(),sus.end(),0);
    for(auto x: sus)
    {
        cout << x;
    }
    vector<int> baka({4,5,6,7});
    reverse(baka.begin(),baka.end());
    for(auto f:baka)
    {
        cout << f;
    }
    vector<int> vec({ 1, 2, 3 });
    do
    {
    for(int x: vec) cout << x << ' ';
    cout << '\n';
    } while(next_permutation(vec.begin(), vec.end()));
    // prints
    // 1 2 3
    // 1 3 2
    // 3 1 2
    // etc...
}
