#include <iostream>
using namespace std;

class base
{
    int data1;

protected:
    void setdata();
    int data2;
    int getdata1();
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
class derived : public base
{
    int data3;

public:
    void sum();
    void display();
};
void derived ::sum()
{
    setdata();
    data3 = getdata1() + data2;
}
void derived ::display()
{
    cout << "Value of data1 = " << getdata1() << endl;
    cout << "Value of data2 = " << data2 << endl;
    cout << "The sum of data1 and data2 = " << data3 << endl;
}
int main()
{
    derived d1;
    d1.sum();
    d1.display();
    return 0;
}