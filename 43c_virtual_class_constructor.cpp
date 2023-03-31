#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        cout << "Data1 constructor revoke" << endl;
        data1 = a;
    }
    void printdata1()
    {
        cout << "Data1 = " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        cout << "Data2 constructor revoke" << endl;
        data2 = b;
    }
    void printdata2()
    {
        cout << "Data2 = " << data2 << endl;
    }
};
class derived : public base1, virtual public base2
{
    int datader;

public:
    derived(int c, int d, int e) : base1(c), base2(d)
    {
        cout << "Derived constructor revoke" << endl;
        datader = e;
    }
    void printder()
    {
        cout << "Datader = " << datader << endl;
    }
};
int main()
{
    derived der(1, 2, 3);
    der.printdata1();
    der.printdata2();
    der.printder();

    return 0;
}