#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setvalue(int val1, int val2)
    {
        a = val1;
        b = val2;
        getvalue();
    }
    void sumcomplex(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
        getvalue();
    }
    void getvalue()
    {
        cout << "The complex no. is: " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex f1, f2, sum;
    f1.setvalue(4, 5);
    f1.getvalue();

    f2.setvalue(6, 8);
    f2.getvalue();

    sum.sumcomplex(f1, f2);
    sum.getvalue();

    return 0;
}