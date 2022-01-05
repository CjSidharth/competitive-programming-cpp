#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    for(int x : st)
    {
        cout << x << "\n";
    }
    for(auto it = ++st.begin(); it != --st.end(); it++)
    {
        cout << *it << ' ';
    }
    for(auto it = ++st.rbegin(); it != --st.rend();it++)
    {
        cout << *it << ' ';
    }
    set<int, greater<int>> st1(st.begin(), st.end()); // set constructor accepts iterators, like most STL containers
    for(int x: st1) cout << x << ' '; // 5 4 3 2 1

}
