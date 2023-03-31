#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;

    return n * fact(n - 1);
}
int fib(int n)
{
    if (n <= 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // cout << "The factorial of " << n << " is: " << fact(n);
    cout << "The fibonaci sequence  of " << n << " is: " << fib(n);

    return 0;
}