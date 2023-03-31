#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int, int);
    void display()
    {
        cout << "The value is: " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{ // Implicit call
    complex c1(4, 6);
    // Explicit call
    complex c2 = complex(5, 4);

    c1.display();
    c2.display();

    return 0;
}