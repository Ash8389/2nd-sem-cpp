#include <iostream>
using namespace std;

int a = 10;

int main()
{
    cout << "Global and Local variable in C++\n\n";
    int a = 5;
    cout << "The value of a is: " << a << endl;     // If both local and global variable have same variable name then it will prefer local variable
    cout << "The value of a is: " << ::a << "\n\n"; // For printing global variable will have to put scope(::) before variable

    cout << "-----**********-----\n\n";
    cout << "Common Data Types in C++\n\n";

    int b = 2;
    float c = 3.141;
    char d = 'a';
    bool e = true;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;

    return 0;
}