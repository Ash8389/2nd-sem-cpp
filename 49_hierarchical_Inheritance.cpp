#include <iostream>
using namespace std;

class base
{
    int database1;

public:
    base(int a)
    {
        database1 = a;
        cout << "Base constructor revoked" << endl;
    }
    void printbase()
    {
        cout << "Database1 = " << database1 << endl;
    }
};
class derived1 : virtual public base
{
    int datader1;

public:
    derived1(int a, int b) : base(a)
    {
        datader1 = b;
        cout << "Derived1 constructor revoked" << endl;
    }
    void printderived1()
    {
        cout << "Dataderived1 = " << datader1 << endl;
    }
};
class derived2 : virtual public base
{
    int datader2;

public:
    derived2(int a, int b) : base(a)
    {
        datader2 = b;
        cout << "Derived2 constructor revoked" << endl;
    }
    void printderived2()
    {
        cout << "Dataderived2 = " << datader2 << endl;
    }
};

int main()
{
    derived1 d1(1, 2);
    derived2 d2(3, 4);
    d1.printbase();
    d1.printderived1();
    d2.printbase();
    d2.printderived2();

    return 0;
}