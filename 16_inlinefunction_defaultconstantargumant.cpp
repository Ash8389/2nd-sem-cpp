#include <iostream>
using namespace std;

inline int mul(int a, int b)
{
    return a * b;
}
int pro(int a, int b)
{                     // don't use inline with these type of functions
    static int c = 0; // it will initialise once
    c = c + 1;        // The value of c is retain
    return a + b + c;
}
float get(int currentmoney, float factor = 1.04) // Always put variable of function on left
{
    return currentmoney * factor;
}
// int strlen(const char *p)
// {

// }

int main()
{
    int a = 5, b = 2;
    int money = 10000;
    float rate = 1.07;
    cout << "The product of a and b is: " << mul(a, b) << endl;
    cout << "The product of a and b is: " << mul(a, b) << endl;
    cout << "The product of a and b is: " << mul(a, b) << endl;
    cout << "The product of a and b is: " << mul(a, b) << endl;
    cout << "The product of a and b is: " << mul(a, b) << endl;
    cout << "The product of a and b is: " << mul(a, b) << endl;
    cout << "The value of function pro is: " << pro(a, b) << endl;
    cout << "The value of function pro is: " << pro(a, b) << endl;
    cout << "The value of function pro is: " << pro(a, b) << endl;
    cout << "The value of function pro is: " << pro(a, b) << endl;
    cout << "If you have " << money << " in your bank account, you will receive " << get(money) << endl;
    cout << "If you have " << money << " in your bank account, you will receive " << get(money, rate) << endl;

    return 0;
}