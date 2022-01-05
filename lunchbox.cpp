
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    priority_queue<int,vector<int>,greater<int> >school;
    cin >> N >> M;
    for(int i = 0; i < M;i++)
    {
        int temp;
        cin >> temp;
        school.push(temp);
    }
    if(M == 1)
    {
        if(!school.empty() && N >= school.top())
        {
            cout << 1;
            return 0;
        }
    }
    while(N >= school.top() && !school.empty())
    {
        N -= school.top();
        school.pop();
    }
    cout << M - school.size();
}
