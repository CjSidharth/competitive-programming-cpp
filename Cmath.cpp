#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float myFloat;
    cin >> myFloat;
    cout << sqrt(myFloat) << endl;
    for(int i = 1; i <= 10; i++)
    {
        cout<<pow(myFloat,i)<<endl;
    }
    return 0;
}
