#include <iostream>
using namespace std;
int main (){
   int n;
   int sum = 0;
   cin >> n;
   int arr[n];
   for(int j = 0; j < n; j++)
   {
       cin >> arr[j];
   }
   for(int i = 0; i<n ; i++){
      sum+=arr[i];
   }
   cout << sum;
   if(sum > 0)
   {
       cout << "HARD";
   }
   else
   {
       cout << "EASY";
   }
   return 0;
}
