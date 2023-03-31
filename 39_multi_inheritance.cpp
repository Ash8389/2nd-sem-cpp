#include <iostream>
using namespace std;
class base1
{
    int data1;

protected:
    void set_data1();
    int get_data1();
};
void base1::set_data1()
{
    data1 = 10;
}
int base1::get_data1()
{
    return data1;
}
class base2
{
    int data2;

protected:
    void set_data2();
    int get_data2();
};
void base2::set_data2()
{
    data2 = 20;
}
int base2::get_data2()
{
    return data2;
}
class base3
{
    int data3;

protected:
    void set_data3();
    int get_data3();
};
void base3::set_data3()
{
    data3 = 30;
}
int base3::get_data3()
{
    return data3;
}
class derived : public base1, public base2, public base3
{
public:
    void setall() // Set all value here because it is protected
    {
        set_data1();
        set_data2();
        set_data3();
    }
    void display()
    {
        cout << "The value of data1 is: " << get_data1() << endl;
        cout << "The value of data2 is: " << get_data2() << endl;
        cout << "The value of data3 is: " << get_data3() << endl;
        cout << "The value of " << get_data1() << " + " << get_data2() << " + " << get_data3() << " = " << get_data1() + get_data2() + get_data3() << endl;
    }
};
int main()
{
    derived sum;
    sum.setall();
    sum.display();

    return 0;
}