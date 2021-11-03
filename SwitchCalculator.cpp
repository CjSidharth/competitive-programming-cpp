
#include <iostream>
using namespace std;

float test(float num1, float num2, char Operator)
{
    //temp will contain the final answer after the required operation is performed
    float temp; //return temp for each switch operation
    switch(Operator)
    {
        case '+':
        float temp = num1 + num2;
        break;
        case '-':
        float temp = num1 - num2;
        break;
        case '*':
        float temp = num1*num2;
        break;
        case '/':
        float temp = num1/num2;
        break;
    }

    cout<<"Number 1 is: " << num1 << endl;
    cout<<"Number 2 is: " << num2 << endl;
    cout << "Operator is: "<<Operator<<endl;

    //write your code for switch statements here
    return temp;
}
