#include <iostream>
using namespace std;

void fun(int a)
{
    cout << "From first fun, a = " << a << endl;
}

template <class T>
void fun(T a)
{
    cout << "From second fun, a = " << a << endl;
}
int main()
{
    fun(5);      // It will call most exact function
    fun<int>(5); // It will call function using template
    return 0;
}