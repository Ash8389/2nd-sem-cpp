#include <iostream>
using namespace std;

class base
{
    // int data1;
    // int data2;
    int data2;
    int data1;

public:
    // base(int a, int b) : data1(a), data2(b)
    // base(int a, int b) : data1(a), data2(b + 2)
    // base(int a, int b) : data1(a), data2(b + data1)
    // base(int a, int b) : data1(a + data2), data2(b) //It return wrong value beacuse data2 have garbage data in it.
    // If we initialize data2 first then it will return right value
    base(int a, int b) : data1(a + data2), data2(b)
    {
        cout << "Constructor revoked" << endl;
    }
    void print()
    {
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }
};
int main()
{
    base b(1, 2);
    b.print();

    return 0;
}