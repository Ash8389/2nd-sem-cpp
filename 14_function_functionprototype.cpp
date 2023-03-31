#include <iostream>
using namespace std;

// int sum(int a, int b);--->Acceptable
// int sum(int a, b);--->Not Acceptable
// int sum(int , int);--->Acceptable
int sum(int a, int b);
// {
//     int sum = a + b;
//     return sum;
// }
void gm()
{
    cout << "Hello, Good Morning\n";
}

int main()
{
    int a, b; // a and b are actual parameters
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    gm();
    cout << "The value of a+b is: " << sum(a, b);
    return 0;
}
int sum(int a, int b)
{
    // Here a and b are formal parameters, it will takes value from actual parameters
    int sum = a + b;
    return sum;
}