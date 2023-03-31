#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

    friend complex sumcomplex(complex c1, complex c2);

public:
    void setvalue(int val1, int val2)
    {
        a = val1;
        b = val2;
    }
    void getvalue()
    {
        cout << "The complex no. is: " << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex c1, complex c2)
{
    complex c3;
    c3.setvalue((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    complex f1, f2, sum;

    f1.setvalue(5, 5);
    f1.getvalue();

    f2.setvalue(2, 4);
    f2.getvalue();

    sum = sumcomplex(f1, f2);
    sum.getvalue();

    return 0;
}