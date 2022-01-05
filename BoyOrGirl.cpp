#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int numUniqeChars = unordered_set<char>(begin(s),end(s)).size();
    if (numUniqeChars%2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}
