#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
signed main() {
	 int n;
	 cin>>n;
	 int capacity=0;
	 int stillnow=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 stillnow-=a;
		 stillnow+=b;
		 capacity=max(capacity,stillnow);

	 }
	 cout<<capacity;

	return 0;
}
