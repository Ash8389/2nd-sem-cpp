#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(int a, int b)
{
    return a + b;
}
// Volume of a cube
int vol(int a)
{
    return a * a * a;
}
// Volume of cylinder
float vol(float r, int h)
{
    return 3.14 * r * r * h;
}
// Volume of rectangular cube
int vol(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout << "The sum of 10 + 5 + 4 is: " << sum(10, 5, 4) << endl;
    cout << "The sum of 5 + 5 is: " << sum(5, 5) << endl;
    cout << "The volume of cuboid of 3, 5, 7 is: " << vol(3, 5, 7) << endl;
    cout << "The volume of cylinder of 6, 2 is: " << vol(6, 2) << endl;
    cout << "The volume of cube of 4 is: " << vol(4) << endl;

    return 0;
}