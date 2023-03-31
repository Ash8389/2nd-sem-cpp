#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        cout << "Base1 constructor executed" << endl;
        data1 = a;
    }
    void print1()
    {
        cout << "Base1 = " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        cout << "Base2 constructor executed" << endl;
        data2 = b;
    }
    void print2()
    {
        cout << "Base2 = " << data2 << endl;
    }
};
// class derived : public base2, public base1 //In this first base1 constructor then base2 constructor then derived constructor revoke
class derived : public base2, public base1 // In this first base2 constructor then base1 constructor then derived constructor revoke
{
    int datader1;
    int datader2;

public:
    derived(int c, int d, int e, int f) : base1(c), base2(d)
    {
        cout << "Derived constructor executed" << endl;
        datader1 = e;
        datader2 = f;
    }
    void printder()
    {
        cout << "Derived data 1 = " << datader1 << endl;
        cout << "Derived data2 = " << datader2 << endl;
    }
};
int main()
{
    derived dev(1, 2, 3, 4);
    dev.print1();
    dev.print2();
    dev.printder();
    return 0;
}