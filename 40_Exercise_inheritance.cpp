#include <iostream>
#include <math.h>
using namespace std;

class simple
{
protected:
    float a, b;
    char c;

public:
    void setsim(float, float, char);
    float resultsim();
};
void simple ::setsim(float x, float y, char z)
{
    a = x;
    b = y;
    c = z;
}
float simple ::resultsim()
{
    switch (c)
    {
    case '+':
        return (a + b);
        break;
    case '-':
        return (a - b);
        break;
    case '*':
        return (a * b);
        break;
    case '/':
        return (a / b);
        break;
    }
}
class scintific
{
protected:
    float a2;
    char c2;

public:
    void setsic(float, char);
    float resultsic();
};
void scintific ::setsic(float x, char z)
{
    a2 = x;
    c2 = z;
}
float scintific ::resultsic()
{
    switch (c2)
    {
    case 's':
        return (sin(a2));
        break;
    case 'c':
        return (cos(a2));
        break;
    case 't':
        return (tan(a2));
        break;
    case 'd':
        return (1 / tan(a2));
        break;
    }
}
class hybrid : public simple, public scintific
{
public:
    void display()
    {
        cout << "The value of " << a << c << b << " is: " << resultsim() << endl;
        if (c2 == 's')
            cout << "The value of sin " << a2 << " is: " << resultsic() << endl;
        if (c2 == 'c')
            cout << "The value of cos " << a2 << " is: " << resultsic() << endl;
        if (c2 == 't')
            cout << "The value of tan " << a2 << " is: " << resultsic() << endl;
        if (c2 == 'd')
            cout << "The value of cot" << a2 << " is: " << resultsic() << endl;
    }
};
int main()
{
    hybrid sim;
    sim.setsim(5, 4, '+');
    sim.setsic(1, 'd');
    sim.display();
    return 0;
}