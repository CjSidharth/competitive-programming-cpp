#include <iostream>
using namespace std;
int main() {
    int number=5;
    do {
        cout<<"Value of number is: "<<number<<endl;
        number++;
    } while(number<=9);   // the contition is being checked after the first run
    return 0;
}
