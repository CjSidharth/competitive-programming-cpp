#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> sus;
    sus.push(2);
    cout << sus.top();
    sus.push(3);
    cout << sus.top();

    stack<int> stck; // stac
    stck.push(2); // 2
    cout << stck.top(); // 2
    stck.push(3); // 2 3
    cout << stck.top(); // 3
    stck.push(4); // 2 3 4
    cout << stck.top(); // 4
    stck.push(5); // 2 3 4 5
    cout << stck.top(); // 5
    stck.pop(); // 2 3 4
    cout << stck.top(); // 4
    while(!stck.empty()) stck.pop();
// stck is now empty
//note empty() returns true if the stack is empty
//and returns false otherwise
    queue<int> q;
    q.push(3);
    q.push(4);
    q.pop();
    cout << q.front();

}
