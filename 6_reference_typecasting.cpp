#include <iostream>
using namespace std;

int main()
{

    //**************Reference variable******************
    // int a = 5;
    // int &y = a; //------------>y is a reference of a
    // cout << "The value of a is: " << a << endl;
    // cout << "The value of y is: " << y;

    //****************Literals*******************
    // cout << "Size of 34.2 is: " << sizeof(34.2) << endl;
    // cout << "Size of 34.2 is: " << sizeof(34.2f) << endl;
    // cout << "Size of 34.2 is: " << sizeof(34.2F) << endl;
    // cout << "Size of 34.2 is: " << sizeof(34.2l) << endl; // l indicates long double
    // cout << "Size of 34.2 is: " << sizeof(34.2L) << endl;

    //****************TypeCasting*****************
    int a = 5;
    int b = 8;
    float c = 5.25;
    cout << "The value of a/b is: " << a / b << endl;
    cout << "The value of a/b is: " << (float)a / b << endl;
    cout << "The value of c is: " << (int)c;

    return 0;
}