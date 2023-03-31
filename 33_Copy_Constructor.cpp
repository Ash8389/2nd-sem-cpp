#include <iostream>
using namespace std;

class number
{
    int num;

public:
    number()
    {
        num = 0;
    }
    number(int a)
    {
        num = a;
    }
    number(number &obj)
    {
        cout << "The copy is called!!!" << endl;
        num = obj.num;
    }
    void display()
    {
        cout << "The number for this object is: " << num << endl;
    }
};
int main()
{
    number a, b(8), c(4), c1, d;
    a.display();
    b.display();
    c.display();
    c1 = number(c);
    c1.display();
    number a1(a);
    a1.display();
    number b1 = b; // It will revoke copy constructor
    b1.display();
    d = c;
    d.display(); // It will not revoke copy constructor
    // We can change the value of copy to be called

    return 0;
}