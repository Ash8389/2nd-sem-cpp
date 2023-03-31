#include <iostream>
using namespace std;

int main()
{
    // poniters us to store address of variable
    int a = 5;
    int *p = &a;
    int **ptr = &p;
    cout << "The value of a is: " << a << endl;
    cout << "The value of a is: " << *p << endl;
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << p << endl;
    cout << "The value of a is: " << **ptr << endl;
    cout << "The address of a is: " << *ptr << endl;
    cout << "The value of p is: " << *ptr << endl;
    cout << "The address of p is: " << ptr << endl;
    cout << "The address of p is: " << &p << endl;

    return 0;
}