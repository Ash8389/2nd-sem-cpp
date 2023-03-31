#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int x, int y)
    {
        return (x + y);
    }
    int sumRealcomplex(complex, complex);
    int sumImgcomplex(complex c1, complex c2);
    // {
    //     return (c1.a + c2.a);  // It will give error because complier don't werther a is in that class or not
    // }
};

class complex
{
    int a;
    int b;

    // ******Individually declaring functions as friend******
    // friend int calculator::sumRealcomplex(complex c1, complex c2);
    // friend int calculator::sumImgcomplex(complex c1, complex c2);

    //***********Alternate: Declaring the entire class as friend***********
    friend class calculator; // Friend class

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

int calculator::sumRealcomplex(complex c1, complex c2)
{
    return (c1.a + c2.a);
}
int calculator::sumImgcomplex(complex c1, complex c2)
{
    return (c1.b + c2.b);
}

int main()
{
    complex f1, f2;
    calculator cal;

    f1.setvalue(5, 6);
    f1.getvalue();

    f2.setvalue(2, 3);
    f2.getvalue();

    int rel = cal.sumRealcomplex(f1, f2);
    int img = cal.sumImgcomplex(f1, f2);
    cout << "Sum of the real part of the complex number is: " << rel << endl;
    cout << "Sum of the real part of the complex number is: " << img << endl;

    return 0;
}