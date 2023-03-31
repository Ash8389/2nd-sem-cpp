#include <iostream>
using namespace std;

// This is call by value, it will not able to swap a and b
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// // Call by reference using pointer
// void swapusingpointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// call by reference using C++ reference variable, it will change the value of return variable
int &swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
// void swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    int a = 5, b = 4;
    cout << "Value of a is " << a << " and b is " << b << endl;
    // swap(a, b);
    // cout << "Now Value of a is " << a << " and b is " << b << endl;
    // swapusingpointer(&a, &b);
    // cout << "Now value of a is " << a << " and b is " << b << endl;
    swapReferenceVar(a, b) = 225;
    cout << "Now value of a is " << a << " and b is " << b << endl;
    // swapReferenceVar(a, b);
    // cout << "Now value of a is " << a << " and b is " << b << endl;
    return 0;
}