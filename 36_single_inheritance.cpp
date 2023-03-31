#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void set_data();
    int get_data1();
    int get_data2();
};
void base::set_data()
{
    data1 = 10;
    data2 = 20;
}
int base::get_data1()
{
    return data1;
}
int base::get_data2()
{
    return data2;
}
class derived : public base
{
    int derdata;

public:
    int set_der();
    void display();
};
int derived::set_der()
{
    derdata = data2 * get_data1();
}
void derived::display()
{
    cout << "Data1 = " << get_data1() << endl;
    cout << "Data2 = " << data2 << endl;
    cout << "The multiple of data1 and data2 is: " << derdata << endl;
}

int main()
{
    derived d1;
    d1.set_data();
    d1.set_der();
    d1.display();

    return 0;
}