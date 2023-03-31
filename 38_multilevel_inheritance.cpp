#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
};
void base ::setdata()
{
    data1 = 5;
    data2 = 10;
}
int base::getdata1()
{
    return data1;
};
class derived1 : public base
{
    int data3;

public:
    int sum();
};
int derived1::sum()
{
    data3 = data2 + getdata1();
    return data3;
}
class derived2 : public derived1
{
    int data4;

public:
    void setdata4();
    void display();
};
void derived2 ::setdata4()
{
    data4 = sum() - data2;
};
void derived2 ::display()
{
    cout << "The value of data1 is: " << getdata1() << endl;
    cout << "The value of data2 is: " << data2 << endl;
    cout << "The value of data3 is: " << sum() << endl;
    cout << "The value of data4 is: " << data4 << endl;
}
int main()
{
    derived2 d1;
    d1.setdata();
    d1.setdata4();
    d1.display();
    return 0;
}