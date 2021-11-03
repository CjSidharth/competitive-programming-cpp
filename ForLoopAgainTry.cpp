#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin >> a >> b;
    for(a;a<=b; a++)
    {
        if(a <= 9)
        {
            cout << arr[a - 1] << endl;
        }
        else
        {
            if(a%2 == 0)
            {
                cout << "even\n";
            }
            else
            {
                cout << "odd\n";
            }
        }


        }
        return 0;
    }


