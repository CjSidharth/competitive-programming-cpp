#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(5); // 5
    q.push(4); // 5 : [4] can be in any order
    q.push(6); // 6 : [4, 5] can be in any order
    q.push(8); // 8 : [6, 4, 5] can be in any order
    q.pop(); // 6 : [4, 5]
    cout << q.top(); // 6

    priority_queue<int, vector<int>, greater<int>> a; //queue which stores the minimum, instead of maximum, element
    a.push(5); // 5
    a.push(4); // 4 : [5] can be in any order
    a.push(6); // 4 : [6, 5] can be in any order
    a.push(8); // 4 : [8, 6, 5] can be in any order
    a.pop(); // 5 : [8, 6]
    cout << a.top(); // 5

}


