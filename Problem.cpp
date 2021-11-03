#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i =0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int j =0;j<n;j++)
    {
        if(1<= arr1[j] && arr1[j]<100)
        {
            cout << "Easy \n";
        }
        else if(100 <= arr1[j] && arr1[j] < 200)
        {
            cout << "Medium \n";
        }
        else
        {
            cout << "Hard \n";
        }
    }
}
