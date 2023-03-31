#include <iostream>
using namespace std;

class base1
{
    int database1;

public:
    void set_base(int a)
    {
        database1 = a;
    }
    int getbasedata1()
    {
        return database1;
    }
};
class derived1 : public base1
{
    int datader1;

public:
    void setder1(int a)
    {
        datader1 = a;
    }
    void sum()
    {
        cout << "Derived1 + base1 = " << datader1 + getbasedata1() << endl;
    }
};
class derived2 : public base1
{
    int datader2;

public:
    void setder2(int a)
    {
        datader2 = a;
    }
    void sumder2()
    {
        cout << "Derived2 + base1 = " << datader2 + getbasedata1() << endl;
    }
    int getdatader2()
    {
        return datader2;
    }
};
class derived2_der1 : public derived2
{
    int datader_der1;

public:
    void setder2_der1(int a)
    {
        datader_der1 = a;
    }
    void sumder2_der1()
    {
        cout << "Derived2 + Derived2->der1  = " << datader_der1 + getdatader2() << endl;
    }
};
class derived2_der2 : public derived2
{
    int datader_der2;

public:
    void setder2_der2(int a)
    {
        datader_der2 = a;
    }
    void sumder2_der2()
    {
        cout << "Derived2 + Derived2->der2 = " << datader_der2 + getdatader2() << endl;
    }
};
int main()
{
    derived1 d1;
    d1.set_base(5);
    d1.setder1(5);
    d1.sum();

    derived2 d2;
    d2.set_base(10);
    d2.setder2(20);
    d2.sumder2();

    derived2_der1 d2_d1;
    d2_d1.setder2(30);
    d2_d1.setder2_der1(40);
    d2_d1.sumder2_der1();

    derived2_der2 d2_d2;
    d2_d2.setder2(50);
    d2_d2.setder2_der2(60);
    d2_d2.sumder2_der2();

    return 0;
}