#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 constructor revoke" << endl;
    }
    void print1()
    {
        cout << "Data1 = " << data1 << endl;
    }
};
class base2 : public base1
{
    int data2;

public:
    base2(int b, int c) : base1(b)
    {
        data2 = c;
        cout << "Base2 constructor revoke" << endl;
    }
    void print2()
    {
        cout << "Data2 = " << data2 << endl;
    }
};
class derived : public base2
{
    int data3;
    int data4;

public:
    derived(int c, int d, int e, int f) : base2(c, d)
    {
        data3 = e;
        data4 = f;
        cout << "Dervied constructor revoke" << endl;
    }
    void printder()
    {
        cout << "data3 = " << data3 << endl;
        cout << "data4 = " << data4 << endl;
    }
};
int main()
{
    derived der(1, 2, 3, 4);
    der.print1();
    der.print2();
    der.printder();
    return 0;
}