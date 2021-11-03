#include <iostream>
using namespace std;
int main()
{
    int myInt = 100;
    myInt = myInt/10;
    cout << myInt << endl;
    myInt = myInt*10;
    cout << myInt << endl;
    myInt = myInt-myInt;
    cout << myInt << endl;
    myInt = myInt+100;
    cout << myInt << endl;
    myInt += 10;
    cout << myInt << endl;
    myInt -= 10;
    cout << myInt << endl;
    myInt /= 10;
    cout << myInt << endl;
    myInt *= 10;
    cout << myInt << endl;
    myInt %= 7;
    cout << myInt << endl;
    return 0;
}
