#include<bits/stdc++.h>
#define vi vector<int>
#define int long long
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
using namespace std;
signed main()
{
	int n;
	int sum = 0;
	cin >> n;
	vi scores;
	vector<string> names;
	vector<string> selected;
	REP(i,0,n)
	{
		string s;
		cin >> s;
		int x;
		cin >> x;
		scores.push_back(x);
		names.push_back(s);
	}
	int c;
	cin >> c;
	REP(i,0,c)
	{
		string sus;
		cin >> sus;
		selected.push_back(sus);
	}
	REP(i,0,c)
	{
		REP(j,0,n)
		{
			if(selected[i] == names[j])
			{
				sum += scores[j];
			}
		}
	}
	cout << sum/c;
	
}