#include <iostream>
using namespace std;

template <class T>
void swapp(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
    printf("x = %d\n", &x); // It wil print 'a' memory address.
    printf("y = %d\n", &y); // It wil print 'b' memory address.
}
int main()
{
    int a = 5, b = 6;
    int &y = a; // 'y' is also referancing to 'a' means both have same memory address.
    // cout << "a = " << &a << " y = " << &y << endl;
    printf("a = %d\n", &a);
    printf("b = %d\n", &b);

    cout << "Before swaping value of a = " << a << " and b  = " << b << endl;
    swapp(y, b); // swapp(a, b) and swapp(y, b) both are same.
    cout << "After swaping value of a = " << a << " and b  = " << b << endl;

    return 0;
}