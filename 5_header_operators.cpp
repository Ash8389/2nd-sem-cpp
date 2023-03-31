#include <iostream>

// There are two types of header files:
// 1. System defined header files. It comes with compiler
// 2. User defined header files. It is written by the programer it must be include in current folder
#include "5_user_define.h"

using namespace std;

int main()
{
    int a = 4;
    int b = 5;
    // These are Arthematic operators;
    //  cout << "a + b is: " << a + b << endl;
    //  cout << "a - b is: " << a - b << endl;
    //  cout << "a * b is: " << a * b << endl;
    //  cout << "a / b is: " << a / b << endl;
    //  cout << "a % b is: " << a % b << endl;

    // These are incriment and decrement operators;
    //  cout << "value of a is: " << a << endl;
    //  cout << "value of a is: " << ++a << endl;
    //  cout << "value of a is: " << a++ << endl;
    //  cout << "Now value of a is: " << a << endl;
    //  cout << "value of b is: " << b << endl;
    //  cout << "value of b is: " << --b << endl;
    //  cout << "value of b is: " << b-- << endl;
    //  cout << "Now value of b is: " << b << endl;

    // Assignment operators use to assign teh value
    //  int a = 2, b = 6;
    //  char c = 'c';

    // Comparison operators
    // cout << "The value of a==b is: " << (a == b) << endl;
    // cout << "The value of a!=b is: " << (a != b) << endl;
    // cout << "The value of a>b is: " << (a > b) << endl;
    // cout << "The value of a<b is: " << (a < b) << endl;
    // cout << "The value of a>=b is: " << (a >= b) << endl;
    // cout << "The value of a<=b is: " << (a <= b) << endl;

    // logical operators
    cout << "The value of ((a == b) && (a != b)) is: " << ((a == b) && (a != b)) << endl;
    cout << "The value of ((a == b) || (a != b)) is: " << ((a == b) || (a != b)) << endl;
    cout << "The value of !(a==b) is: " << !(a == b) << endl;

    return 0;
}