#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}
class derived : private base
{
    int data;

public:
    void muldata();
    void display();
};
void derived ::muldata()
{
    setdata();
    data = getdata1() * getdata2();
}
void derived ::display()
{
    cout << "Data1 = " << getdata1() << endl;
    cout << "Data2 = " << data2 << endl;
    cout << "The value of data1*data2 = " << data;
}
int main()
{
    derived d1;
    d1.muldata();
    d1.display();
    return 0;
}