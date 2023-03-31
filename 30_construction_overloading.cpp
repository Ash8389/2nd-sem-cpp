#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex();
    complex(int);
    complex(int, int);
    void display()
    {
        cout << "The value is: " << a << " + " << b << "i" << endl;
    }
};
complex::complex()
{
    a = 7;
    b = 3;
}
complex::complex(int x)
{
    a = x;
    b = 0;
}
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c1(5), c2(4, 6), c3;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}