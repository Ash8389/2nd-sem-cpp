#include <iostream>
using namespace std;

class simple
{
    int a;
    int b;
    int c;

public:
    simple(int, int, int);
    void display()
    {
        cout << "a = " << a << " b = " << b << " c = " << c << endl;
    }
};
simple::simple(int x = 3, int y = 10, int z = 30)
{
    a = x;
    b = y;
    c = z;
}

int main()
{
    simple s1, s2(20), s3(5, 8), s4(1, 2, 3);

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}